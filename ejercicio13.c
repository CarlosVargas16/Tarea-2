/*Vargas Rodriguez Carlos Antonnio
Programa 13*/

#include <stdio.h>

int main() {
    int n;
    printf("Tamano del arreglo: ");
    scanf("%d", &n);

    int arr[n], suma = 0;

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &arr[i]);
        suma += arr[i];
    }

    printf("Suma total: %d\n", suma);
    return 0;
}
