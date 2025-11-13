#include <stdio.h>
int main(){
  /** 
   * Union is have several data type together and have one memory location at a time 
   * if one value is taken place and another type will override the type on that location
  **/

  typedef union {
    int i;
    char c;
  } ResponseType ;

  ResponseType responseType; // size will the highest size of union types
  responseType.c = 'h'; // now the i is taken the memory location of that
  responseType.i = 24; // it override the memory location and place the value

  ResponseType response = {1}; // | {.i = 1}
  ResponseType responsegreat = {.i = 1};
  response.c = 'b';  // now if you access the i or c the value is overriden by c

  printf("%d\n",responseType.c); // 24
  printf("%d\n",responseType.i); // 24
  printf("%c\n",response.i); // b
  printf("%c\n",response.c); // b
}
