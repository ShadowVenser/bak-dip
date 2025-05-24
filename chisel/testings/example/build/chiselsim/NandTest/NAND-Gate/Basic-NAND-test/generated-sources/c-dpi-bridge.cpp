#include <stdint.h>

#ifdef SVSIM_ENABLE_VERILATOR_SUPPORT
#include "verilated-sources/VsvsimTestbench__Dpi.h"
#endif
#ifdef SVSIM_ENABLE_VCS_SUPPORT
#include "vc_hdrs.h"
#endif

extern "C" {
 svScope setScopeToTestBench();
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
    case 0: // x1
      getBitWidth_x1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_x1;
      return 0;
    case 1: // x2
      getBitWidth_x2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_x2;
      return 0;
    case 2: // y
      getBitWidth_y(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_y;
      return 0;
    default:
      return -1;
  }
}

int port_setter(int id, int *bitWidth, void (**setter)(const uint8_t*)) {
  switch (id) {
    case 0: // x1
      getBitWidth_x1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_x1;
      return 0;
    case 1: // x2
      getBitWidth_x2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_x2;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

