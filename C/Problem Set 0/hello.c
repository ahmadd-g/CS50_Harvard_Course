#include <stdio.h>

int main(void){
  // printf("Hello, world\n");
  char username[30] = "";
  printf("Type your name: ");
  fgets(username, sizeof(username), stdin);
  printf("Hello, %s", username);
}