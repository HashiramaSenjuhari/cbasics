#include <stdio.h>

// #####################################################################################
// Object Like Macros (Constants / simple replacement)
// #####################################################################################
#define BILLIONAIRE 24; // here added `;` to show the usage
#define STRING "billionaire" // here not added `;`

int billionaire = BILLIONAIRE // this pre complied as `int billionaire = 24;`
// but here the `;` is not added in the billionaire variable but the BILLIONAIRE is replced 24; not 24
char string[] = STRING; // this is pre complied as "billionaire"

// #####################################################################################







// #####################################################################################
// Function macro
// #####################################################################################

#define MAX(a,b) ((a > b) ? a : b);
#define SQR(a) a * a
#define EMPTY = 24;

int max = MAX(2, 6) // this is taking ((2 > 6) ? 2 : 6)
int sqr = SQR(2 + 6); // this takes 2 + 6 * 2 + 6 not like 8 * 8
int empty EMPTY // this makes int empty = 24;

// #####################################################################################






// #####################################################################################
// Predefined Macro
// #####################################################################################

void predefined_macro(){
  printf("%d\n",__LINE__);
  printf("%s\n",__FILE__);
  printf("%s\n",__FILE_NAME__);
  printf("%s\n",__DATE__);
  printf("%s\n",__TIME__);
}

// #####################################################################################




// #####################################################################################
// Stringzing And Token Pasting
// #####################################################################################

// STRINGZING
#define toString(x) #x // Converts the value into string

// TOKEN PASTING || CONCATINATION
#define MAKE_VAR(x,y) x##y // merge the two variable letter and print the variable value if present
// int billionaire24 = 24;
// usage
// printf("%d",MAKE_VAR(billionaire,24)); // this concat the variable to billionaire24;
// printf("%d",MAKE_VAR(billionaire,26)); // this show error because there is no billionaire26;

// ######################################################################################



// ######################################################################################
// Variadic Macro
// ######################################################################################



#define LOG(fmt,...) \
  printf("[LOG] " fmt __VA_OPT__(, __VA_ARGS__))

#define LOGS(fmt,...) \
  printf("[LOGS]" fmt __VA_OPT__(,  __VA_ARGS__))
  // __VA_OPT__ is used to check if the extra arguments is passed or not
  // this gives __VA_ARGS__ if extra arguments present else nothing
  /*
   *  WITHOUT __VA_OPT__
      LOG("%s","billionaire"); this pre process as "[LOG]" "%s" , "billionaire"    

      LOG("billionaire"); this process like "[LOG]" "billionaire", so there is extra trailing comma

      so this cause error

      WITH __VA_OPT__(value)
      check for the extra argument and complie value if there else Nothing

      usage
      #define LOG(a,...) \ 
        printf("%d"__VA_OPT__(b) __VA_ARGS);
   */
// ######################################################################################


int main(){
  int b24 = 24;
  // printf("%d\n",billionaire);
  // printf("%d\n",empty);
  printf("%s\n",toString(24 billionaire));
  printf("%d\n",MAKE_VAR(b, 24));
  LOG("%s\n","billionaire is great");
  LOG("billionaire is great\n");
  LOGS("%s","BILLIONAIRE");
  // predefined_macro();
  return 0;
}
