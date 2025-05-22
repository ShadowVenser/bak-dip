#include "VsyncMux.h"
#include "verilated.h"
#include "verilated_fst_c.h"  
#include <iostream>
#include <random>

#define VL_TIME_PRECISION 1  // 1 пс
vluint64_t main_time = 0;

double sc_time_stamp() { return 0; }
double VL_TIME() { return main_time; }

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VsyncMux* top = new VsyncMux;
    Verilated::traceEverOn(true);

    VerilatedFstC* tfp = new VerilatedFstC;       
    top->trace(tfp, 99, true);                      
    tfp->open("mux.fst");                           

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist16(0, 65535);
    std::uniform_int_distribution<> dist1(0, 1);

    top->clk = 0;
    top->clr_n = 0;

    top->eval();
    tfp->dump(main_time); main_time += 5;

    for (int i = 0; i < 2; ++i) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(main_time); main_time += 5;
    }

    top->clr_n = 1;

    for (int i = 0; i < 10; ++i) {
        top->clk = !top->clk;

        unsigned int x1 = dist16(gen);
        unsigned int x2 = dist16(gen);
        unsigned int addr = dist1(gen);

        top->x1 = x1;
        top->x2 = x2;
        top->addr = addr;

        top->eval();
        tfp->dump(main_time); main_time += 5;

        top->clk = !top->clk;
        top->eval();
        tfp->dump(main_time); main_time += 5;

        assert((int)top->y == (addr ? x2 : x1));
        std::cout << "test " << main_time << " - passed!" << std::endl;
    }

    top->eval();
    tfp->dump(main_time); main_time += 5;

    tfp->flush();
    tfp->close();
    delete tfp;
    delete top;
    return 0;
}