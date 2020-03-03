#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define FALSE 0
#define TRUE 1


int main(int argc, char * argv[]){

  char * initial_string = argv[1];
  int length = strlen(initial_string);

  int current_index = 0;
  char input_char;

  char * input_buffer = (char *)malloc(length * sizeof(char *));

  if(input_buffer == NULL){
    fprintf(stderr, "Malloc failure, exiting...\n");
    exit(EXIT_FAILURE);
  }
  else{

  }
  printf("\n");

  while(TRUE){
      while(current_index < length){

        input_char = initial_string[current_index];

        if(input_char == '\0'){ break; }

        else{
          input_buffer[current_index] = input_char;
        }
        current_index++;
      }
      break;
    }
    printf("%s",input_buffer);
    printf("\n\n");

  return 0;
}
