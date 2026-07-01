#include <stdio.h>
#include <stdlib.h>
 
// 

int main(){

    int inicio, fim, i, j, ehPrimo;

    printf("Digite o valor inicial e final (ex: 1 50): ");
    scanf("%d %d", &inicio, &fim);

    printf("Numeros primos entre %d e %d:\n", inicio, fim);

    for (i = inicio; i <= fim; ++i) {

        if (i <= 1) continue; // Ignora 0 e 1
        ehPrimo = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                ehPrimo = 0;
                break;
            }
        }

        if (ehPrimo == 1) {
            printf("%d\n", i);
        }
    }
    printf("\n");

    
    return 0;
}