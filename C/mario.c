#include <stdio.h>

void print_row(int n);

int main(void){
  // for (int i = 0; i < 4; i++){
  // printf("?");
  // }
  // printf("\n");

  // for (int row = 0; row < 3; row++){
  //   for (int col = 0; col < 3; col++){
  //   printf("#");
  // }
  // printf("\n");
  // }

  const int n = 3;

  // Print rows
  for (int i = 0; i < n; i++){
    print_row(n);
  }
}

void print_row(int n){
  for (int i = 0; i < n; i++){
    printf("#");
  }
  printf("\n");
}