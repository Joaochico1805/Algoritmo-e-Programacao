#include <stdio.h>
#include <stdlib.h>
 
// ponteiro

int main(){

    int b = 10, *ponteiro;
 
    ponteiro = &b;
 
    printf("Valor de b: %d \n", b);
 
    *ponteiro = 40;
 
    printf("Valor de b: %d \n", b);
    
    return 0;
}