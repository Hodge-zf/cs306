#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1

int get_str_len(char * string);

int main(int argc, char * argv[]){

  if(argc != 4){
    printf("Incorrect number of arguments, exiting...\n");
    exit(EXIT_FAILURE);
  }

  char * string1 = argv[1];
  char * string2 = argv[3];
  int insertion_index = atoi(argv[2]);

  char * final_string = (char *)malloc((sizeof(string1)*sizeof(string2)-sizeof(char)));

  if(final_string == NULL){
    fprintf(stderr, "Malloc failure, exiting...\n");
    exit(EXIT_FAILURE);
  }

  int counter1 = 0;
  int counter2 = 0;
  int counter3 = 0;

  while(TRUE){
    if(counter1 < insertion_index){
      final_string[counter1] = string1[counter2];
      counter1++;
      counter2++;
    }
    else{
      if(final_string[counter1]){
        break;
      }
      if(string2[counter3] == '\0'){
        final_string[counter1] = string1[counter2];
        counter1++;
        counter2++;
      }
      else{
        final_string[counter1] = string2[counter3];
        counter1++;
        counter3++;
      }
    }
  }

  printf("\n");
  printf("%s",final_string);
  printf("\n");


  return 0;
}

int get_str_len(char * string){

}
