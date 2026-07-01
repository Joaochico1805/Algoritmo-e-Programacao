#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia dois numeros inteiros e imprima se pelo menos um deles eh maior que 10.

int main(){

    int n1, n2;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("\nDigite um numero: ");
    scanf("%d", &n2);
    

    if(n1 > 10 || n2 > 10){
        printf("\n%d ou %d eh maior que 10!\n\n", n1, n2);
    }else{
        printf("\n%d e %d sao menores que 10!\n\n", n1, n2);
    }
    

    return 0;
}