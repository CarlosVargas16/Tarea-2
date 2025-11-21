/*Vargas Rodriguez Carlos Antonnio
Programa 10*/

#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, nul = 0;

    for (int i = 1; i <= 100; i++) {
        printf("Numero %d: ", i);
        scanf("%d", &num);

        if (num > 0) pos++;
        else if (num < 0) neg++;
        else nul++;
    }

    printf("Positivos: %d\nNegativos: %d\nNulos: %d\n", pos, neg, nul);

    return 0;
}
