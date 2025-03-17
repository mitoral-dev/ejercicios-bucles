#include <stdio.h>

int main() {

    int tabla;

    printf("Introduce un numero para ver su tabla de multiplicar (1-10)\n");
    scanf("%d", &tabla);

    printf("\n***TABLA DEL %d***\n", tabla);
    printf("----------------------------\n");

    for (int i = 0; i < 10; i++) {
        int result = tabla * (i+1);
        printf("%d x %d = %d\n", tabla, i+1, result);
    }

    return 0;
}