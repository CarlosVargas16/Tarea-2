/*Vargas Rodriguez Carlos Antonnio
Programa 11*/

#include <stdio.h>

int main() {
    int suma = 0;

    for (int i = 10; i <= 50; i += 2)
        suma += i;

    printf("Suma de pares entre 10 y 50: %d\n", suma);

    return 0;
}
