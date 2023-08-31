#include<stdio.h>

main(){

    int numero;
    
    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero == 5) {
        printf("Parabens, o numero que voce inseriu eh 5!");
    } else if (numero == 200) {
        printf("Parabens, o numero que voce inseriu eh 200!");
    } else if (numero == 400) {
        printf("Parabens, o numero que voce inseriu eh 400!");
    } else if (numero > 500 && numero < 1000) {
        printf("O numero que voce inseriu esta entre 500 a 1000");
    } else {
        printf("Poxa, o numero que voce inseriu nao eh o que estavamos esperando :(");
    }

}