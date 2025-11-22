/*Vargas Rodriguez Carlos Antonnio
Programa 16*/

#include <stdio.h>

int main() {
    int arr[100];
    int valor = 2;

    for (int i = 0; i < 100; i++) {
        arr[i] = valor;
        valor += 2;
    }

    printf("Los primeros 100 numeros pares:\n");
    for (int i = 0; i < 100; i++)
        printf("%d ", arr[i]);

    return 0;
}
