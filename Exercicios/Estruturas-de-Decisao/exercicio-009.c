#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Faca um programa que jogue tres dados e exiba a soma dos valores gerados.

int main(){

    srand(time(NULL));

    int dado1 = (rand() % 6) + 1;
    int dado2 = (rand() % 6) + 1;
    int dado3 = (rand() % 6) + 1;

    int soma = dado1 + dado2 + dado3;

    printf("\n%d %d %d", dado1, dado2, dado3);
    printf("\n\nsoma = %d\n\n", soma);

    return 0;
}