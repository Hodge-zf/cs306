#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(){

  int input_char;
  int char_counter = 0;
  int buffer_size = 10;
  char * line_buffer = malloc(buffer_size * sizeof(char));

  if(line_buffer == NULL){
    fprintf(stderr, "malloc failure...\n");
    exit(EXIT_FAILURE);
  }

  while(input_char != '.'){

      if(char_counter >= buffer_size){
        printf("Resizing...\n");
        buffer_size = buffer_size * 2;
        char * temp = realloc(line_buffer, buffer_size);

        if(temp == NULL){
          fprintf(stderr, "realloc failure...\n");
          exit(EXIT_FAILURE);
        }
        line_buffer = temp;
      }

    input_char = getchar();

    if(input_char == ' '){
        input_char = '\n';
    }
    line_buffer[char_counter] = input_char;
    char_counter++;
  }

  fprintf(stdout, line_buffer);

  printf("%c", '\n');
  return 0;
}
