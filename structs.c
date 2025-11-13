#include <stdio.h>
#include <string.h>

/** Struct initalization **/
struct Billionaire {
  char name[24];
  int age;
};

// or

typedef struct {
  char name[24];
  int age;
} TypeDefBillionaire;

// can used directly as `Billionaire billionaire = {}`

/** End **/


typedef struct {
  int id;
  struct Billionaire billionaire;
  TypeDefBillionaire typedef_billionaire;
} BillionaireProfile;

void take_struct_as_parameter(TypeDefBillionaire *billionaire){
  // DONT'S
  // billionaire.name

  // Defereing methods
  strcpy(billionaire ->name,"");
  strcpy((*billionaire).name,"");
}

int main(){
  struct Billionaire hari = {"hari",24};

  // BillionaireProfile profile = {1,{"hari",24},{"hari",24}};
  //
  // strcpy(profile.billionaire.name, "hari");
  //
  // struct Billionaire temp = {"billionairehari",24};
  // memcpy(&profile.billionaire, &temp, sizeof(struct Billionaire));

  printf("%s\n",hari.name);

  TypeDefBillionaire typedefhari = {"hari",24};
  take_struct_as_parameter(&typedefhari);
  return 0;
}


