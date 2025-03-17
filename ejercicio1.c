#include <stdio.h>

int main() {

    int numero;
    int total = 0;

    
    printf("Introduce un numero para sumar. Para terminar, introduce un 0. \n");
    scanf("%d", &numero);

    while (numero != 0) {
        // total += numero
        total = total + numero;

        printf("El total ahora mismo es: %d\n", total);
        printf("Introduce un numero para sumar. Para terminar, introduce un 0. \n");
        scanf("%d", &numero);
    }

    printf("La suma total es: %d\n", total);
    
    return 0;
}
