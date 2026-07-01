#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia dois numeros inteiros e imprima na tela qual eh o maior deles ou se sao iguais.

int main(){

    int n1, n2;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    

    if(n1 < n2){
        printf("\n%d eh menor que %d.\n\n", n1, n2);
    }else if (n1 == n2){
        printf("\n%d eh igual a %d.\n\n", n1, n2);
    }else{
        printf("\n%d eh maior que %d.\n\n", n1, n2);
    }
    

    return 0;
}