#include <stdio.h>

int main() {

    int numero;

    int min = 1;
    int max = 30;

    do {
        printf("Introduce un numero del %d al %d: ", min, max);
        scanf("%d", &numero);
    } while (numero < min || numero > max);

    printf("Numero valido!! %d\n", numero);

    return 0;
}