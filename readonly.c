#include <stdio.h>

int main(){
  /** readonly variable 
   *
   * storage place is inside "data segments"
   * you can change the address but not the value
   *
  **/
  char *p = "BillionaireHari"; // *p points to the first element address of the {'b','i','l','l','i','o','n','a','i','r','e','h','a','r','i'} Block
  // can be used to store in readonly only by strings
  // because at starting of "c" program the string literals are meant to be immutable so to make it both immutable and mutable
  // these are often stored in rom,data segments in code,flash
  // so pointer takes the first value of string here it is "B"
 
  p = "Billlionaire"; // here changing pointer to point to new block "Billionaire" but here we are changing the value we are changing the pointer points
  
  printf("%p\n",p); // pointer point to first element inside memory block {'b','i','l','l','i','o','n','a','i','r','e'}
  printf("%s\n",p);
  // printf("%s",*p);
  // printf("%s",&p);
  // int *pt = {1,2,3,4,5,6}; // because most of the int arrays are calculated
}
