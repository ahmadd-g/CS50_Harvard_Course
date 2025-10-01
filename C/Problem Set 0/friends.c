#include <stdio.h>
#include <string.h>

int main(void){
  // Name
  char name[30] = "";
  printf("What's your name? ");
  fgets(name, sizeof(name), stdin);
  name[strlen(name) - 1] = '\0'; // Elimina el '\n'

  // Age
  int age = 0;
  printf("What's your age? ");
  scanf("%d", &age);
  while(getchar() != '\n'); // Limpia el búfer después de scanf

  // Hometown
  char hometown[30] = "";
  printf("What's your hometown? ");
  fgets(hometown, sizeof(hometown), stdin);
  hometown[strlen(hometown) - 1] = '\0'; // Elimina el '\n' si existe

  // Phone number
  char number[30] = "";
  printf("What's your phone number? ");
  fgets(number, sizeof(number), stdin);
  number[strlen(number) - 1] = '\0'; // Elimina el '\n' si existe

  printf("My new friend's name is %s, %i, they are from %s, and their phone number is %s", name, age, hometown, number);

  return 0;
}