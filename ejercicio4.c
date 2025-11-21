/*Vargas Rodriguez Carlos Antonnio
Programa 4*/

#include <stdio.h>

int main() {
    float cantidad, tasa;
    printf("Cantidad invertida: ");
    scanf("%f", &cantidad);
    printf("Tasa de interes mensual (en porcentaje): ");
    scanf("%f", &tasa);

    float interes = cantidad * (tasa / 100);
    float total = cantidad + interes;

    printf("Monto total al final del mes: %.2f\n", total);

    return 0;
}
