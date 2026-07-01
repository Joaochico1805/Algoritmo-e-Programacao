#include <stdio.h>
#include <stdlib.h>
 
// 

int main(){

    int n;

    printf("DIGITE UM NUMERO: ");
    scanf("%d", &n);

    for(int i = 10; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}