#include <stdio.h>
#include <stdlib.h>


const int size = 6;

/** malloc - this initliaize continues block of memory with uninitialized values **/

int main(){

  // uninitialized value i,e garbage value that prev program left
  int *with_casting_b = (int *)malloc(size * sizeof(int)); // (int*) treat every pointer points to int
  long *with_casting_error_b = (int *)malloc(size * sizeof(long)); // (int*) cast every pointer points to int

  int *b = malloc(size * sizeof(int));
  // malloc returns the address pointing to void i,e any type

  // now b hold the memory address of the first element of block

  // allocating value
  for(int i = 0;i<size;i++){
    b[i] = 24;
  }

  // reading the value
  for(int i = 0;i<size;i++){
    printf("%d\n",b[i]);
  }

  // freeing up will tell the memory manager that these blocks are free so anyone can reuse these blocks
  // but the reference remains same so it cause dangling or crashing due to value overriding value that is being used in this code after freeing up so setting up NULL make clear
  free(b);

  // dangling i,e using value that is no longer in our control but using that value

  b = NULL;

  return 0;
}

/** realloc - Reallocating the existing memory block can be squeezing or expanding **/

void relloc_main(){
  int *b = malloc(size * sizeof(int));
  int *expanding = realloc(b, size * size * sizeof(int)); // rellocated from 6 to 36
  int *shrinking = realloc(expanding, sizeof(int[24])); // shrinks from 36 to 24
}


/** calloc is used to create memory block with initliazed value of 0 **/

void calloc_main(){
  int *billionaire = calloc(6,sizeof(int));

  for(int i = 0;i<6;i++){
    *(billionaire + i) = i; // i,e billionaire[i]
  }
  free(billionaire);
  billionaire = NULL;
}
