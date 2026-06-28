#include <stdio.h>
#include <stdlib.h>
 
// faca um programa que conte de 10 a 0.

int main(){

    int i = 10;

    while (i >= 0)
    {
        printf("%d \n", i);

        i -= 1;
    }
    
    return 0;
}