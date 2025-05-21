#include "Vmedian.h"
#include "verilated.h"
#include "verilated_fst_c.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <cassert>
#include <chrono>


vluint64_t main_time = 0;
double sc_time_stamp() { return main_time; }

// Вспомогательная функция подачи значений
void apply_matrix(Vmedian* top, const std::vector<uint8_t>& values) {
    assert(values.size() == 9);
    top->arr_0 = values[0];
    top->arr_1 = values[1];
    top->arr_2 = values[2];
    top->arr_3 = values[3];
    top->arr_4 = values[4];
    top->arr_5 = values[5];
    top->arr_6 = values[6];
    top->arr_7 = values[7];
    top->arr_8 = values[8];
}

int main(int argc, char** argv) {
    auto start = std::chrono::high_resolution_clock::now();

    Verilated::commandArgs(argc, argv);

    Vmedian* top = new Vmedian;
    Verilated::traceEverOn(true);
    VerilatedFstC* tfp = new VerilatedFstC;
    top->trace(tfp, 99);
    tfp->open("median.fst");

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(0, 255);

    const int num_tests = 1198*673;

    for (int t = 0; t < num_tests; ++t) {
        std::vector<uint8_t> values(9);
        for (auto& v : values) v = dist(gen);

        apply_matrix(top, values);  

        std::vector<uint8_t> sorted = values;
        std::sort(sorted.begin(), sorted.end());
        uint8_t expected = sorted[4];

        top->eval();
        tfp->dump(main_time); main_time += 1;

        std::cout << "Test " << t + 1 << ": expected=" << (int)expected
                  << ", actual=" << (int)top->med << std::endl;

        assert(top->med == expected);

        tfp->dump(main_time); main_time += 1;
    }

    tfp->close();
    delete tfp;
    delete top;

    std::cout << "All tests passed.\n";

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

    std::cout << "Real time: " << duration.count() << " ms" << std::endl;
    return 0;
}
