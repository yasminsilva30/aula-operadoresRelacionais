#include<stdio.h>

main(){

    int numero;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &numero);

    if (numero % 2 == 0 ) {
        printf("O numero inserido eh par!");
    }

    return 0;

}