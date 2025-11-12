#include <stdint.h>
int main(){
  /** intergers family **/
  int great = 24; // int contain 16 bit
  int greats[] = {1,2,3,4,5,6};
  int8_t great8bit = 2; // stores eight bit
  int16_t great16bit = 2934834;
  int32_t great32bit = 23759842398;

  /** Flexible memory  **/
  int64_t great64bit = 2397283740824738; // fixed size of 64 bit
  int_least32_t greatleast32bit = 23482847928713469; // it have minimum of 32 bit memory space and maximum of 64 bit
  int_fast32_t greatfast32bit = 2734982740827;  // it have same as int_least32 but it perform fast

  /** float family **/
  float fgreat = 24.0; // float contain 32bit value
  double dgreat = 917223.0; // double contain 64 bit value
  float fgreats[] = {1.2,1.2,1.3,2.4};


  /** type modifier **/
  short int atleast16bit = 3289324; // at least 16 bit
  long int atleast32_or_64bit = 8123182; // 32 bit in 32bit system or 64bit in 64bit system
  
  long long greatlong = 298234; /** and **/ long long int greatlong_ = 298234; /** both are same **/
  /** long === long int **/
  /** short === short int **/

  /** strings **/
  char letter = 'b';
  char letters[] = {'a','b','c'};
  char letters2[] = "billionairehari";

  /** boolean **/
  return 0;
}
