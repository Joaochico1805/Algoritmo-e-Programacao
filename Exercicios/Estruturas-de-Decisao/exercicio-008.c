#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia tres numeros inteiros e imprima se todos eles sao maiores que 10.

int main(){

    int n1, n2, n3;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("\nDigite um numero: ");
    scanf("%d", &n2);
    printf("\nDigite um numero: ");
    scanf("%d", &n3);
    

    if(n1 > 10 && n2 > 10 && n3 > 10){
        printf("\n%d %d %d sao maiores que 10.\n\n", n1, n2, n3);
    }else{
        printf("\n%d %d %d nao sao todos maiores que 10.\n\n", n1, n2, n3);
    }
    

    return 0;
}