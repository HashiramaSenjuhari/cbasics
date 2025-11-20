#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdbool.h>

/** 
 *  Intnerseting things
 *
 *  EOF is constant value of 1
 *  Pointer can have null pointer
**/

void reading_char_by_char(FILE *file){
  int great;
  while((great = getc(file)) != EOF){
    // handle this char here
    // printf("%c",great);
  }
  fclose(file);
}

void reading_line_by_line(FILE *file){
  char billionaire[240];

  printf("%d\n",feof(file)); // print 0 because it is false
 
  while(fgets(billionaire,sizeof(billionaire),file) != NULL){
    printf("%s",billionaire);
  }

  // checking the file is end of tile

  printf("%d\n",feof(file)); // print 1 because it is true
  if(feof(file)){
    printf("End of File\n");
  }else {
    printf("%d\n",ferror(file));
  }
}

void read_formatted(FILE *file){
  char greats[10000]; // this is just number
  fscanf(file,"%s",greats); /** this will read upto /n eg: hello\n hari is great 
    read only upto hello
  **/

  // Best practice
  // csv
  // 100 "billionaire" true
  //
  // bool isYoungestBillionaire;
  // fscanf(file, "%d %s %b",digit,name,isYoungestBillionaire);

}

void reading(FILE *file){
}

int main(){
  FILE *file = fopen("../../package-lock.json","r");
  // reading_char_by_char(file);
  // reading_line_by_line(file);
  read_formatted(file);
  return 0;
}

/**
  fopen()	Open or create a file
  fclose() flushed to os and Close an open file

  <Read>
  ===================================
  Read a character
  fgetc() return int	

  Read a line (string)
  fgets()	return pointer

  Read formatted data
  fscanf() return int

  Read blocks of data (binary)
  fread()	return unsigned long
  ===================================

  fputc()	Write a character
  fputs()	Write a string
  fwrite()	Write blocks of data (binary)
  fprintf()	Write formatted data

  fseek()	Move file pointer
  ftell()	Get current file position
  rewind()	Set pointer to beginning of file
  rename()	Rename a file
  remove()	Delete (remove) a file
**/

