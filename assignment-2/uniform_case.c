#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define FALSE 0
#define TRUE 1

// char * change_case(int length, char * string[]);

int main(int argc, char * argv[]){

  printf("%s",argv[1]);

  char * initial_string = argv[1];
  int length = strlen(initial_string);
  printf("%d", length);
  printf("\n");


//this line down copied

  int current_index = 0;
  char input_char;

  char * input_buffer = (char *)malloc(length * sizeof(char *));

  if(input_buffer == NULL){
    fprintf(stderr, "Malloc failure, exiting...\n");
    exit(EXIT_FAILURE);
  }
  else{
    printf("%s", "\nmalloc success\n");
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


//  char * newstring = change_case(length, &initial_string);

//  printf("%s\n", newstring);


  return 0;
}

/* char * change_case(int length, char * string[]){

  int current_index = 1;
  char input_char;

  printf("%d", length);
  char * input_buffer = (char *)malloc(length * sizeof(char *));

  if(input_buffer == NULL){
    fprintf(stderr, "Malloc failure, exiting...\n");
    exit(EXIT_FAILURE);
  }
  else{
    printf("%s", "\nmalloc success\n");
  }
  printf("\n");

  while(TRUE){
      while(current_index < length){

        input_char = string[current_index];
        printf("%c", input_char);

        if(input_char == '\0'){ break; }

        else{
          input_buffer[current_index] = input_char;
        }
        current_index++;
      }
      return input_buffer;
    }
}*/
