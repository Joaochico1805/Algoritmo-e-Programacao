#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia dois numeros inteiros e imprima na tela se a soma eh maior/igual a 10 ou menor que 10.

int main(){

    int n1, n2, soma;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    if(soma >= 10){
        printf("\nA soma entre %d e %d eh maior ou igual a 10.\n\n", n1, n2);
    }else{
        printf("\nA soma entre %d e %d eh menor que 10.\n\n", n1, n2);
    }

    return 0;
}