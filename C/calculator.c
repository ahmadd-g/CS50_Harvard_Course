#include <stdio.h>
#include <stdbool.h>

int main(void){
  // int x;
  // printf("x: ");
  // scanf("%d", &x);

  // int y;
  // printf("y: ");
  // scanf("%d", &y);

  // int z = x + y;

  // printf("%d\n", x + y);

  // CON CS50
  // printf("%i\n", get_int("x: ") + get_int("y: "));
  // printf("%i\n", x * 2);

  int x;
  printf("x: ");
  scanf("%d", &x);

  int y;
  printf("y: ");
  scanf("%d", &y);
  printf("%.5f\n", (float) x / y);
}