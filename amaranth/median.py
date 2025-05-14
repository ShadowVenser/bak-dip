from amaranth.lib import wiring
from amaranth.lib.wiring import In, Out
from amaranth import *
from amaranth.back import verilog

class Median(wiring.Component):

    arr_0: In(8, init=0) # type: ignore
    arr_1: In(8, init=0) # type: ignore
    arr_2: In(8, init=0) # type: ignore
    arr_3: In(8, init=0) # type: ignore
    arr_4: In(8, init=0) # type: ignore
    arr_5: In(8, init=0) # type: ignore
    arr_6: In(8, init=0) # type: ignore
    arr_7: In(8, init=0) # type: ignore
    arr_8: In(8, init=0) # type: ignore

    med: Out(8) # type: ignore

    def compare(self, dut, a, b, c, low=None, me=None, high=None, mode='full', name='default'):

        sels = [Signal(name=name+f'sel_{i}') for i in range(3)]
        subs = [Signal(unsigned(8), name=name+f'sub_{i}') for i in range(3)]

        #first compare
        if mode == 'high':
            dut.d.comb += sels[0].eq(a < b)
        else:
            dut.d.comb += sels[0].eq(a > b)
        if mode == 'full' or mode == 'med':
            dut.d.comb += subs[0].eq(Mux(sels[0], a, b))
        dut.d.comb += subs[1].eq(Mux(sels[0], b, a))

        #second compare
        dut.d.comb += sels[1].eq(subs[1] > c)
        if mode == 'high':
            dut.d.comb += high.eq(Mux(sels[1], subs[1], c))
        else:
            if mode != 'low':
                dut.d.comb += subs[2].eq(Mux(sels[1], subs[1], c))
            if mode != 'med':
                dut.d.comb += low.eq(Mux(sels[1], c, subs[1]))

        #third compare
        if mode != 'low' and mode != 'high':
            dut.d.comb += sels[2].eq(subs[0] > subs[2])
            if mode != 'med':
                dut.d.comb += high.eq(Mux(sels[2], subs[0], subs[2]))
            dut.d.comb += me.eq(Mux(sels[2], subs[2], subs[0]))

    def elaborate(self, _): #_ is platform
        median = Module()
        arr = [self.arr_0, self.arr_1, self.arr_2,
               self.arr_3, self.arr_4, self.arr_5,
               self.arr_6, self.arr_7, self.arr_8,]

        f_high, f_med, f_low = [], [], []
        for i in range(3):
            h, m, l = (Signal(unsigned(8), name=f'{v}{i}') for v in ['h', 'm', 'l'])
            self.compare(median, arr[i*3+0], arr[i*3+1], arr[i*3+2], low=l, me=m, high=h, name=f'fc_{i}')
            f_high.append(h)
            f_med.append(m)
            f_low.append(l)
        
        s_high, s_med, s_low = (Signal(unsigned(8), name=f'sec_{i}') for i in range(3))

        self.compare(median, *f_high, low=s_high, mode='low', name='sl')
        self.compare(median, *f_med, me=s_med, mode='med', name='sm')
        self.compare(median, *f_low, high=s_low, mode='high', name='sh')

        self.compare(median, s_high, s_med, s_low, me=self.med, mode='med', name='tm')

        return median

if __name__ == "__main__":
    dut = Median()

    # Генерация без комментариев
    v = verilog.convert(dut, 
                        name="median", 
                        emit_src=False,
                        )
    print(v)
