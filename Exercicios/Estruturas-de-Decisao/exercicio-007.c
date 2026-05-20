#include <stdio.h>
#include <stdlib.h>

// Faca um programa que leia um numero inteiro e informe se ele esta entre 0 e 10.

int main(){

    int n1;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    

    if(n1 > 0 && n1 < 10){
        printf("\n%d esta entre 0 e 10.\n\n", n1);
    }else{
        printf("\n%d nao esta entre 0 e 10.\n\n", n1);
    }
    

    return 0;
}