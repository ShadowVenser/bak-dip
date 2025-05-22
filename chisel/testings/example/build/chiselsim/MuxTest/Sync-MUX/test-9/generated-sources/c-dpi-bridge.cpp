#include <stdint.h>

#ifdef SVSIM_ENABLE_VERILATOR_SUPPORT
#include "verilated-sources/VsvsimTestbench__Dpi.h"
#endif
#ifdef SVSIM_ENABLE_VCS_SUPPORT
#include "vc_hdrs.h"
#endif

extern "C" {
 svScope setScopeToTestBench();
void getBitWidth_clk(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_clk(result);
           svSetScope(prev);
        }
void getBits_clk(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_clk(result);
           svSetScope(prev);
        }
void setBits_clk(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_clk(data);
           svSetScope(prev);
        }
void getBitWidth_clr_n(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_clr_n(result);
           svSetScope(prev);
        }
void getBits_clr_n(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_clr_n(result);
           svSetScope(prev);
        }
void setBits_clr_n(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_clr_n(data);
           svSetScope(prev);
        }
void getBitWidth_x1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_x1(result);
           svSetScope(prev);
        }
void getBits_x1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_x1(result);
           svSetScope(prev);
        }
void setBits_x1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_x1(data);
           svSetScope(prev);
        }
void getBitWidth_x2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_x2(result);
           svSetScope(prev);
        }
void getBits_x2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_x2(result);
           svSetScope(prev);
        }
void setBits_x2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_x2(data);
           svSetScope(prev);
        }
void getBitWidth_addr(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_addr(result);
           svSetScope(prev);
        }
void getBits_addr(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_addr(result);
           svSetScope(prev);
        }
void setBits_addr(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_addr(data);
           svSetScope(prev);
        }
void getBitWidth_y(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_y(result);
           svSetScope(prev);
        }
void getBits_y(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_y(result);
           svSetScope(prev);
        }

int port_getter(int id, int *bitWidth, void (**getter)(uint8_t*)) {
  switch (id) {
    case 0: // clk
      getBitWidth_clk(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_clk;
      return 0;
    case 1: // clr_n
      getBitWidth_clr_n(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_clr_n;
      return 0;
    case 2: // x1
      getBitWidth_x1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_x1;
      return 0;
    case 3: // x2
      getBitWidth_x2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_x2;
      return 0;
    case 4: // addr
      getBitWidth_addr(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_addr;
      return 0;
    case 5: // y
      getBitWidth_y(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_y;
      return 0;
    default:
      return -1;
  }
}

int port_setter(int id, int *bitWidth, void (**setter)(const uint8_t*)) {
  switch (id) {
    case 0: // clk
      getBitWidth_clk(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_clk;
      return 0;
    case 1: // clr_n
      getBitWidth_clr_n(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_clr_n;
      return 0;
    case 2: // x1
      getBitWidth_x1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_x1;
      return 0;
    case 3: // x2
      getBitWidth_x2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_x2;
      return 0;
    case 4: // addr
      getBitWidth_addr(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_addr;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

