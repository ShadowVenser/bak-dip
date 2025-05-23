#include <stdint.h>

#ifdef SVSIM_ENABLE_VERILATOR_SUPPORT
#include "verilated-sources/VsvsimTestbench__Dpi.h"
#endif
#ifdef SVSIM_ENABLE_VCS_SUPPORT
#include "vc_hdrs.h"
#endif

extern "C" {
 svScope setScopeToTestBench();
void getBitWidth_arr_0_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_0_0(result);
           svSetScope(prev);
        }
void getBits_arr_0_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_0_0(result);
           svSetScope(prev);
        }
void setBits_arr_0_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_0_0(data);
           svSetScope(prev);
        }
void getBitWidth_arr_0_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_0_1(result);
           svSetScope(prev);
        }
void getBits_arr_0_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_0_1(result);
           svSetScope(prev);
        }
void setBits_arr_0_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_0_1(data);
           svSetScope(prev);
        }
void getBitWidth_arr_0_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_0_2(result);
           svSetScope(prev);
        }
void getBits_arr_0_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_0_2(result);
           svSetScope(prev);
        }
void setBits_arr_0_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_0_2(data);
           svSetScope(prev);
        }
void getBitWidth_arr_1_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_1_0(result);
           svSetScope(prev);
        }
void getBits_arr_1_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_1_0(result);
           svSetScope(prev);
        }
void setBits_arr_1_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_1_0(data);
           svSetScope(prev);
        }
void getBitWidth_arr_1_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_1_1(result);
           svSetScope(prev);
        }
void getBits_arr_1_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_1_1(result);
           svSetScope(prev);
        }
void setBits_arr_1_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_1_1(data);
           svSetScope(prev);
        }
void getBitWidth_arr_1_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_1_2(result);
           svSetScope(prev);
        }
void getBits_arr_1_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_1_2(result);
           svSetScope(prev);
        }
void setBits_arr_1_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_1_2(data);
           svSetScope(prev);
        }
void getBitWidth_arr_2_0(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_2_0(result);
           svSetScope(prev);
        }
void getBits_arr_2_0(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_2_0(result);
           svSetScope(prev);
        }
void setBits_arr_2_0(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_2_0(data);
           svSetScope(prev);
        }
void getBitWidth_arr_2_1(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_2_1(result);
           svSetScope(prev);
        }
void getBits_arr_2_1(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_2_1(result);
           svSetScope(prev);
        }
void setBits_arr_2_1(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_2_1(data);
           svSetScope(prev);
        }
void getBitWidth_arr_2_2(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_arr_2_2(result);
           svSetScope(prev);
        }
void getBits_arr_2_2(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_arr_2_2(result);
           svSetScope(prev);
        }
void setBits_arr_2_2(const svBitVecVal* data) {
           svScope prev = setScopeToTestBench();
           setBitsImpl_arr_2_2(data);
           svSetScope(prev);
        }
void getBitWidth_med(int* result) {
           svScope prev = setScopeToTestBench();
           getBitWidthImpl_med(result);
           svSetScope(prev);
        }
void getBits_med(svBitVecVal* result) {
           svScope prev = setScopeToTestBench();
           getBitsImpl_med(result);
           svSetScope(prev);
        }

int port_getter(int id, int *bitWidth, void (**getter)(uint8_t*)) {
  switch (id) {
    case 0: // arr_0_0
      getBitWidth_arr_0_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_0_0;
      return 0;
    case 1: // arr_0_1
      getBitWidth_arr_0_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_0_1;
      return 0;
    case 2: // arr_0_2
      getBitWidth_arr_0_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_0_2;
      return 0;
    case 3: // arr_1_0
      getBitWidth_arr_1_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_1_0;
      return 0;
    case 4: // arr_1_1
      getBitWidth_arr_1_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_1_1;
      return 0;
    case 5: // arr_1_2
      getBitWidth_arr_1_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_1_2;
      return 0;
    case 6: // arr_2_0
      getBitWidth_arr_2_0(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_2_0;
      return 0;
    case 7: // arr_2_1
      getBitWidth_arr_2_1(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_2_1;
      return 0;
    case 8: // arr_2_2
      getBitWidth_arr_2_2(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_arr_2_2;
      return 0;
    case 9: // med
      getBitWidth_med(bitWidth);
      *getter = (void(*)(uint8_t*))getBits_med;
      return 0;
    default:
      return -1;
  }
}

int port_setter(int id, int *bitWidth, void (**setter)(const uint8_t*)) {
  switch (id) {
    case 0: // arr_0_0
      getBitWidth_arr_0_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_0_0;
      return 0;
    case 1: // arr_0_1
      getBitWidth_arr_0_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_0_1;
      return 0;
    case 2: // arr_0_2
      getBitWidth_arr_0_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_0_2;
      return 0;
    case 3: // arr_1_0
      getBitWidth_arr_1_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_1_0;
      return 0;
    case 4: // arr_1_1
      getBitWidth_arr_1_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_1_1;
      return 0;
    case 5: // arr_1_2
      getBitWidth_arr_1_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_1_2;
      return 0;
    case 6: // arr_2_0
      getBitWidth_arr_2_0(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_2_0;
      return 0;
    case 7: // arr_2_1
      getBitWidth_arr_2_1(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_2_1;
      return 0;
    case 8: // arr_2_2
      getBitWidth_arr_2_2(bitWidth);
      *setter = (void(*)(const uint8_t*))setBits_arr_2_2;
      return 0;
    default:
      return -1;
  }
}

} // extern "C"

