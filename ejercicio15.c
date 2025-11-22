/*Vargas Rodriguez Carlos Antonnio
Programa 15*/

#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0, nul = 0;
    printf("Tamano del arreglo: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i+1);
        scanf("%d", &arr[i]);

        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else nul++;
    }

    printf("Positivos: %d\nNegativos: %d\nNulos: %d\n", pos, neg, nul);
    return 0;
}
