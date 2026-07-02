#include <stdio.h>
#include <stdlib.h>
 
// funcoes

int RetornaDez();

int main(){

    int a;

    a = RetornaDez();

    printf("%d", a);
    
    return 0;
}

int RetornaDez(){

     return 10;

}