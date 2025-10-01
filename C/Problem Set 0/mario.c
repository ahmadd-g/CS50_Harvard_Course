#include <stdio.h>

void print_row(int bricks);

int main(void){
  // Prompt user for an input
  int height = 0;
  do{
  printf("What's the height of the pyramid? ");
  scanf("%d", &height);
  while(getchar() != '\n'); // Limpia el búfer después de scanf
  } while (height < 1);
  

  // Print a pyramid of that height
  for (int i = 0; i < height; i++){
    print_row(i); // O le añades '+1' e vez del '=<' de abajo
  }

  // int width = 0;
  // printf("What's the width of the pyramid? ");
  // scanf("%d", &width);
  // while(getchar() != '\n'); // Limpia el búfer después de scanf

}

void print_row(int bricks){
  for (int i = 0; i <= bricks; i++){
  printf("#");
  }
  printf("\n");
}