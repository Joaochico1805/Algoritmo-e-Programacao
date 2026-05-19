#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia um numero inteiro e informe se ele eh par ou impar.

int main(){

    int n1;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    

    if(n1 % 2 == 0){
        printf("\n%d eh par.\n\n", n1);
    }else{
        printf("\n%d eh impar.\n\n", n1);
    }
    

    return 0;
}