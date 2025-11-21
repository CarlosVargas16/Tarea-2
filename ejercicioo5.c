/*Vargas Rodriguez Carlos Antonnio
Programa 5*/

#include <stdio.h>

int main() {
    float compra;
    printf("Monto de la compra: ");
    scanf("%f", &compra);

    if (compra > 2500) {
        compra -= compra * 0.08;
    }

    printf("Total a pagar: %.2f\n", compra);
    return 0;
}
