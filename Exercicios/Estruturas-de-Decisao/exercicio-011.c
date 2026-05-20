#include <stdio.h>
#include <stdlib.h>

// 

int main(){

    int n1, n2, opcao, resultado;

    printf("\nDigite um numero: ");
    scanf("%d", &n1);
    printf("\nDigite um numero: ");
    scanf("%d", &n2);
    
    printf("\n--------MENU--------");
    printf("\n1 -       para SOMAR");
    printf("\n2 -    para SUBTRAIR");
    printf("\n3 - para MULTIPLICAR");
    printf("\n4 -     para DIVIDIR");
    printf("\n--------------------\n\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n%d + %d = %d\n\n", n1, n2, n1+n2);
        break;
    
    case 2:
        printf("\n%d - %d = %d\n\n", n1, n2, n1-n2);
        break;   
    
    case 3:
        printf("\n%d * %d = %d\n\n", n1, n2, n1*n2);
        break;

    case 4:
        printf("\n%d / %d = %d\n\n", n1, n2, n1/n2);
        break;
    
    default:
        printf("Opcao invalida!");
        break;
    }

    return 0;
}