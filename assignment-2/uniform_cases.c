#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#define FALSE 0
#define TRUE 1

char * flatten_cases(char * input_string);

int main(int argc, char * argv[]){

  for(int j = 1; j < argc; j++){
    flatten_cases(argv[j]);
  }

  return 0;
}

char * flatten_cases(char * input_string){

  char * initial_string = input_string;
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

  while(initial_string[current_index] < 65){
    input_char = initial_string[current_index];
    if(input_char != '\0'){
      input_buffer[current_index] = input_char;
      current_index++;
    }
  }

  if(initial_string[current_index] >= 65 && initial_string[current_index] <=90){
    printf("Changing to uppercase...\n");
    while(current_index < length){
      input_char = initial_string[current_index];
      input_buffer[current_index] = toupper(input_char);
      current_index++;
    }
  }

  else if(initial_string[current_index] >= 97 && initial_string[current_index] <=122){
    printf("Changing to lowercase...\n");
    while(current_index < length){
      input_char = initial_string[current_index];
      input_buffer[current_index] = tolower(input_char);
      current_index++;
    }
  }
  printf("%s",input_buffer);
  printf("\n\n");
  return input_buffer;
}
