#include <stdio.h>

int main(void){
  printf("What's x? ");
  int x = 0;
  scanf("%d", &x);
  printf("What's y? ");
  int y = 0;
  scanf("%d", &y);

  if (x < y){
    printf("x is less than y\n");
  } else if(x > y) {
    printf("x is greater than y\n");
  }
  else{
    printf("x is equal to y\n");
  }
}