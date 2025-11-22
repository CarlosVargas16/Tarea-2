/*Vargas Rodriguez Carlos Antonnio
Programa 14*/

#include <stdio.h>

int main() {
    int n, buscar, cont = 0;

    printf("Tamano del arreglo: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Numero a buscar: ");
    scanf("%d", &buscar);

    for (int i = 0; i < n; i++)
        if (arr[i] == buscar) cont++;

    printf("El numero aparece %d veces.\n", cont);
    return 0;
}
