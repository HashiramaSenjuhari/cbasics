#include <stdio.h>

/** auto **/
// this stores inside ram

void auto_function(){
  auto int value_only_accessible_inside_local_function = 24; 
  // or is same as 
  int value_only_accessible_inside_local_function = 24;
}

/** static **/
// this stores inside ram

void static_function(){
  static int value_stay_presistent_on_calling = 24;
  value_stay_presistent_on_calling ++;
}

/** register **/
// this hints the complier to store inside register
// if the registers are busy then the values are stored in ram
// the registers are only accessble by cpu for alu calculation
// use in heavily used variable
// but any way without register int counter also it stores in register because it is calculating
// modern compilers ignore the register hint

void register_function(){
  register int counter;
  for(counter = 0;counter <= 6;counter ++){
    printf("%d",counter);
  }
}

int main(){
  static_function(); // 25
  static_function(); // 26
  static_function(); // 27
  static_function(); // 28
  static_function(); // 29
  static_function(); // 30
}


