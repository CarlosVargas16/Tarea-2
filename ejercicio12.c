/*Vargas Rodriguez Carlos Antonnio
Programa 12*/

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese N: ");
    scanf("%d", &n);

    long long prod = 1;

    for (int i = 1; i <= n; i++)
        prod *= i;

    printf("Producto = %lld\n", prod);
    return 0;
}
