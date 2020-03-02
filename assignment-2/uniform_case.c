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
  int current_char = 0;

  printf("%d", length);
  char * input_buffer = (char *)malloc(length * sizeof(char *));

  if(input_buffer == NULL){
    printf("%s", "Malloc failure, exiting...\n");
    exit;
  }
  else{
    printf("%s", "\nmalloc success\n");
  }

/*
    while(current_char != -1){
      while(current_index < length){
        current_char = input;

        if(current_char == '\0'){ break; }

        else{
          printf("%d", current_char);
        }
      }
    } */
}
