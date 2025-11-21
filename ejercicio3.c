/*Vargas Rodriguez Carlos Antonnio
Programa 3*/

#include <stdio.h>

int main() {
    float dolares;
    printf("Ingrese la cantidad en dolares: ");
    scanf("%f", &dolares);

    float pesos = dolares * 11.96;

    printf("Equivalente en pesos: %.2f\n", pesos);

    return 0;
}
