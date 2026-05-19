#include <stdio.h>
#include <stdlib.h>

// Leia um numero e imprima o resultado do quadrado desse numero.

int main(){

    float n;

    printf("\nDigite um numero: ");
    scanf("%f", &n);

    printf("O quadrado de %0.2f eh: %0.2f", n, (n*n));

    return 0;
}