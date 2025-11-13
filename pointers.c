
#include <stdio.h>
int main(){
  /** Pointers are used to carry the address of the variable's memory not the value **/
  int billionaire = 24;
  /* ============================================= */

  int *ptr = &billionaire;
  /* int *ptr tells that it holds the address of integer*/
  /** this ptr variable holds the memory address of billionaire not the value **/
  /** "*" represent that the ptr is holding the value of an variable **/

  /* ============================================= */

  // printf("%d",ptr); // this will print the address as output

  /** Accessing the variable **/
  // printf("%d",*ptr); // this will print the inner value called derefer "de refer"
  
  /** 
   *  void Pointer used to get any value and defered by casting that value type
  **/
  int great = 24;
  void *greats;
  greats = &great;
  printf("%f",*(float*)greats); // this print 0.00000 because it is telling to point as float but original is int
  printf("%d\n",*(int*)greats);
  return 0;
}

/** Pointer Paramter **/
void billionaire(int* ptr /** this parameter takes only the address of variable **/ ){
  *ptr = 24; // this will modify the original value
  printf("%d",*ptr); // dereferring here
}

/** Double Pointer **/
void doublePointer() {
  int value = 24;
  int *ptr = &value;
  int **ptr2 = &ptr;
  
  // Dereferring double Pointers
  printf("%d",value);
  printf("%d",*ptr);
  printf("%d",**ptr2);
}
