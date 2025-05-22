#include "VsyncMux.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

#define MAX_TIME 100
#define CLOCK_PERIOD 2

vluint64_t main_time = 0;

double sc_time_stamp() {
    return main_time;
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);

    VsyncMux* top = new VsyncMux;
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("mux.fst");

    std::srand(std::time(nullptr));

    top->clk = 0;
    top->clr_n = 0;
    top->eval();
    tfp->dump(main_time);
    main_time += 5;

    top->clr_n = 1; // снять сброс
    for (int i = 0; i < 10; ++i) {
        uint16_t x1 = std::rand() % 65536;
        uint16_t x2 = std::rand() % 65536;
        uint8_t addr = std::rand() % 2;

        top->x1 = x1;
        top->x2 = x2;
        top->addr = addr;

        for (int j = 0; j < CLOCK_PERIOD * 2; ++j) {
            top->clk = !top->clk;
            top->eval();
            tfp->dump(main_time);
            main_time += 5;
        }

        std::cout << "x1=" << x1 << ", x2=" << x2 << ", addr=" << (int)addr 
                  << " -> y=" << top->y << std::endl;
    }

    tfp->close();
    delete top;
    delete tfp;

    return 0;
}