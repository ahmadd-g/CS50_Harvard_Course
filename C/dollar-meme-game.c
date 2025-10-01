#include <stdio.h>
#include <stdbool.h>

int main(void){
  long long dollars = 1;
  while (true){
    char c;
    printf("Here's $%lld. Double it and ive it to the next person? ", dollars);
    scanf(" %c", &c);
    if (c == 'y'){
      dollars *= 2;
    } else{
      break;
    }
  }
  printf("Here's $%ld.\n", dollars);
}