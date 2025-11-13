#include <stdio.h>

typedef enum {
  HERO, // 1
  VILLAN, // 2
  PEOPLE // 3
} Player ;

typedef enum {
  SUCCESS = 200,
  ERROR = 402,
  NOT_FOUND = 404
} Code;

typedef enum {
  FOUR = 4,
  FIVE, // 5
  SIX // 6
} NUMBER;

typedef enum {
  PERM_NONE = 0,
  PERM_READ = 1,
  PERM_WRITE = 2,
  PERM_EXECUTE = 4,
  PERM_DELETE = 8
} Great;

int main(){
  Player type = HERO;

  Code code = SUCCESS;
  if(code == 200){
    printf("%d\n",code);
  }
  if(code == SUCCESS){
    printf("%d\n",code);
  }
}
