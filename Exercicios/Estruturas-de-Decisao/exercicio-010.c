#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia dois numeros inteiros e imprima se pelo menos um deles for par.

int main(){

    int n1, n2;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("\nDigite um numero: ");
    scanf("%d", &n2);
    

    if((n1 % 2 == 0) || (n2 % 2 == 0)){
        printf("\n%d ou %d eh par!\n\n", n1, n2);
    }else{
        printf("\n%d e %d sao impares!\n\n", n1, n2);
    }
    

    return 0;
}