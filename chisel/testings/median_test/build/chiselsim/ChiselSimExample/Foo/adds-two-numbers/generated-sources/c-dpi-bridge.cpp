#include <stdint.h>

#ifdef SVSIM_ENABLE_VERILATOR_SUPPORT
#include "verilated-sources/VsvsimTestbench__Dpi.h"
#endif
#ifdef SVSIM_ENABLE_VCS_SUPPORT
#include "vc_hdrs.h"
#endif

extern "C" {
 svScope setScopeToTestBench();
void getBitWidth_clock(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_clock(result);
           svSetScope(prev);
        }
void getBits_clock(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_clock(result);
           svSetScope(prev);
        }
void setBits_clock(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_clock(data);
           svSetScope(prev);
        }
void getBitWidth_reset(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_reset(result);
           svSetScope(prev);
        }
void getBits_reset(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_reset(result);
           svSetScope(prev);
        }
void setBits_reset(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_reset(data);
           svSetScope(prev);
        }
void getBitWidth_a(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_a(result);
           svSetScope(prev);
        }
void getBits_a(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_a(result);
           svSetScope(prev);
        }
void setBits_a(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_a(data);
           svSetScope(prev);
        }
void getBitWidth_b(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_b(result);
           svSetScope(prev);
        }
void getBits_b(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_b(result);
           svSetScope(prev);
        }
void setBits_b(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_b(data);
           svSetScope(prev);
        }
void getBitWidth_c(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_c(result);
           svSetScope(prev);
        }
void getBits_c(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_c(result);
           svSetScope(prev);
        }

int port_getter(int id, int *bitWidth, void (**getter)(uint8_t*)) {
  switch (id) {
    case 0: // clock
      getBitWidth_clock(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_clock;
      return 0;
    case 1: // reset
      getBitWidth_reset(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_reset;
      return 0;
    case 2: // a
      getBitWidth_a(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_a;
      return 0;
    case 3: // b
      getBitWidth_b(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_b;
      return 0;
    case 4: // c
      getBitWidth_c(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_c;
      return 0;
    default:
      return -1;
  }
}

int port_setter(int id, int *bitWidth, void (**setter)(const uint8_t*)) {
  switch (id) {
    case 0: // clock
      getBitWidth_clock(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_clock;
      return 0;
    case 1: // reset
      getBitWidth_reset(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_reset;
      return 0;
    case 2: // a
      getBitWidth_a(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_a;
      return 0;
    case 3: // b
      getBitWidth_b(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_b;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

