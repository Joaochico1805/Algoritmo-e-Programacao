#include <stdio.h>
#include <stdlib.h>

// Peca ao usuario para digitar tres valores inteiros e imprima a soma deles.

int main(){

    int n1, n2, n3;

    printf("\nDigite o 1o numero inteiro: ");
    scanf("%d", &n1);
    printf("\nDigite o 2o numero inteiro: ");
    scanf("%d", &n2);
    printf("\nDigite o 3o numero inteiro: ");
    scanf("%d", &n3);

    printf("\nA soma entre %d, %d e %d eh: %d", n1, n2, n3, (n1+n2+n3));

    return 0;
}