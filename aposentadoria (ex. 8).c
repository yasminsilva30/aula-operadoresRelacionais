#include<stdio.h>

main(){

    int idade, tempo;

    printf("Digite quantos anos voce tem: \n");
    scanf("%d", idade);

    printf("Digite a quantos anos voce trabalha: \n");
    scanf("%d", tempo);

    if (idade >= 65) {
        printf("Voce ja pode se aposentar!");
    } else if (tempo >= 30) {
        printf("Voce ja pode se aposentar!");
    } else if (idade >= 60 && tempo >= 25) {
        printf("Voce ja pode se aposentar!");
    }

}