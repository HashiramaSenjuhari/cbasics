int main(){
  /** Typedef are used to convert the existing types to new type called alias  **/
  
  typedef int Int16BitArray;
  Int16BitArray integer = 24;

  /** Struct **/

  typedef struct { char name[24]; } NameStruct;
  NameStruct name_struct = { "billionairehari" };

  /** LOng **/

  typedef int long long Int64Bit;
  Int64Bit great = 7671236;

  /** Pointer **/

  typedef int* IntPointer;
  int original = 24;
  IntPointer copy = &original;

  /** UNION **/

  typedef union {
    char c;
    int i;
    char s[24];
  } ResponseType ;
}
