/*Vargas Rodriguez Carlos Antonnio
Programa 7*/

#include <stdio.h>

int main() {
    float distancia, dias;
    printf("Distancia de ida (km): ");
    scanf("%f", &distancia);
    printf("Dias de estancia: ");
    scanf("%f", &dias);

    float total_km = distancia * 2;
    float precio = total_km * 0.23;

    if (dias > 7 && total_km > 800) {
        precio *= 0.70;  // 30% descuento
    }

    printf("Precio final del ticket: %.2f\n", precio);
    return 0;
}
