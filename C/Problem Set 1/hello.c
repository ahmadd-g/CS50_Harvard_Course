#include <stdio.h>

int main(void) {
    char user_input[100]; // Arreglo de caracteres para almacenar el string
    printf("What's your name? ");
    scanf("%99s", user_input); // Lee hasta 99 caracteres para evitar desbordamiento
    printf("hello, %s\n", user_input);
    return 0;
}