/*Vargas Rodriguez Carlos Antonnio
Programa 6*/

#include <stdio.h>

int main() {
    float sueldo;
    printf("Sueldo actual: ");
    scanf("%f", &sueldo);

    if (sueldo < 1000)
        sueldo *= 1.15;
    else
        sueldo *= 1.12;

    printf("Sueldo con aumento: %.2f\n", sueldo);
    return 0;
}
