/*Vargas Rodriguez Carlos Antonnio
Programa 9*/

#include <stdio.h>

int main() {
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    return 0;
}
