#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

void change_case(int length, char * string[]);

int main(int argc, char * argv[]){

  int length = strlen(argv[1]);

  change_case(length, argv);

  //for(int i = 1; i < argc; i++){
  printf("%s\n", argv[1]);
  //}

  return 0;
}

void change_case(int length, char * string[]){

  int current_index = 0;
  char current_char = 'A';

  printf("%d", length);
  char * input_buffer = (char *)malloc(length * sizeof(char *));

  if(input_buffer == NULL){
    fprintf(stderr, "Malloc failure, exiting...\n");
    exit(EXIT_FAILURE);
  }
  else{
    printf("%s", "\nmalloc success\n");
  }
  printf("%c", current_char);
  printf("\n");

  while(TRUE){
      while(current_index < length){

//      current_char = **(string+2);
      printf("%c", current_char);

        if(current_char == '\0'){ break; }

        else{
//          input_buffer[current_index] = string[current_index];
        }
        current_index++;
      }
      break;
    }
}