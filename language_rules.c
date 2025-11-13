#include <stdio.h>
#include <string.h>


int main(){
  /** before getting into langauge rule first we need to understand the array allocation architecture **/

  int greats[24]; // this create unitialized garbage values
  printf("%d",greats); // now this points to first element address

  /** Iterating methods
   *
   *  greats[i]
   *  *(great + i)
   *
  **/

  // so now we know that greats is containing the first element address not the whole array
  // now trying to assign block of array after initalizing the array wont work
  // because the great is now pointing towards first element address not even value

  /** DONT'S **/
  greats = {1,2,3,4,5,6}; // this wont work
  
  /** DO'S **/
  greats[0] = 1;
  greats[23] = 24;

  *greats = 1; // first element
  *(greats + 1) = 2;

  /** RECOMMENDED **/
  
  // for int array
  int original[] = {1,2,3,4,5,6};
  memcpy(greats,original, sizeof(greats)); // memcpy(dest,source,sizeofdest)

  // for string array
  char original_string[24] = "Billionaire";
  char copied_string[24];
  
  // method 1 using strcpy
  strcpy(copied_string, original_string);

  // method 2 using memcpy
  memcpy(copied_string,original_string,strlen(original_string) + 1); // +1 because every string has "\0" at last
  

  /** Half filled array inner look **/
  int array[24] = {1,2,3}; // here 24 is size but 3 size is used and 21 block size is empty so these are filled with 0
  // {1,2,3,0,0....0} [23] size

  char array_str[24] = "billionaire";
  // {'b','i','l','l','i','o','n','a','i','r','e','/0','/0','/0'...'/0'} [24] size because it include extra one variable at last as '/0'

}
