#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define FALSE 0
#define TRUE 1

//void change_case(char * string[]);

int main(int argc, char * argv[]){

//  change_case($1);
  for(int i = 1; i < argc; i++){
    printf("%s", argv[i]);
  }

  return 0;
}

/* void change_case(char string[]){

//    int current_index = 0;
    int current_char = 0;

    while(current_char != -1){
      while(1){
        current_char = fgetc(string);

        if(current_char == '\0'){ break; }

        else{
          printf("%s", );
        }
      }
    }
} */
