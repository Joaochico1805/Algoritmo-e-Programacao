#include <stdio.h>
#include <stdlib.h>
 
// Strings

int main(){

    char nome[] = "fulano";

    for(int i=0; i < 8; i++){
        printf("Valor do elemento %d da string = %c \n", i, nome[i]);
    }
    
    return 0;
}