
#include <stdio.h>

int main(void) {
    char user_input[100];
    printf("Ingrese su nombre: ");
    scanf("%99s", user_input);
    printf("hello, %s\n", user_input);
    return 0;
}

