#include <stdio.h>
#include <stdlib.h>
 
// faca um programa que imprima de 50 ate 0, diminuindo de 6 em 6.

int main(){

    for(int i = 50; i > 0; i -= 6)
    {
        printf("%d\n", i);
    }
    
    return 0;
}