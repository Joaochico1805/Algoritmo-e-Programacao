#include <stdio.h>
#include <stdlib.h>
 
// Vetores

int main(){

    int vetor[3], soma = 0;

    for(int i=0; i < 3; i++){
        printf("Digite o primeiro valor: ");
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("%d", soma);
    
    return 0;
}