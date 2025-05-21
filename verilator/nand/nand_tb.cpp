#include "VnandGate.h"
#include "verilated.h"
#include "verilated_vcd_c.h"  
#include <iostream>

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);

    VnandGate* top = new VnandGate;
    Verilated::traceEverOn(true);  
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99, true);  
    tfp->open("nand.vcd");  

    int time = 0;

    for (int i = 0; i < 4; ++i) {
        unsigned int x1 = i / 2;
        unsigned int x2 = i % 2;
        top->x1 = x1;
        top->x2 = x2;

        top->eval();
        tfp->dump(time++);

        assert((int)top->y == ((~(x1 & x2)) % 2));
        std::cout << "test " << i + 1 << " - passed!" << std::endl; 
    }

    top->eval();
    tfp->dump(time++);

    tfp->close();
    delete tfp;
    delete top;
    return 0;
}