#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char * argv[]){

  if(argc != 4){
    printf("Incorrect number of arguments, exiting...\n");
    exit(EXIT_FAILURE);
  }

  char * string1 = argv[1];
  char * string2 = argv[3];
  int insertion_index = atoi(argv[2]);
  
  printf("%s",string1);
  printf("\n");
  printf("%s",string2);
  printf("\n");
  printf("%d",insertion_index);
  printf("\n");
  return 0;

}
