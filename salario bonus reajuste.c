#include<stdio.h>

main(){

    double salario, valorReajuste, salarioReajustado;
    int tempo;

    printf("Digite o seu salario: (exemplo: 1200)");
    scanf("%lf", &salario);

    printf("Digite a quanto tempo voce trabalha nesta empresa em MESES");
    scanf("%d", &tempo);


    if (salario == 500 && tempo <= 12) {
        valorReajuste = (salario * 25) / 100;

        salarioReajustado = valorReajuste + salario;

        printf("Seu salario reajustado eh: %lf", salarioReajustado);

    } else if (salario == 1000 && tempo >= 12 && tempo <= 36) {
        valorReajuste = (salario * 20) / 100;

        salarioReajustado = valorReajuste + salario + 1;

        printf("Seu salario reajustado eh: %lf", salarioReajustado);

    } else if (salario == 1500 && tempo >= 48 && tempo <= 72) {
        valorReajuste = (salario * 15) / 100;

        salarioReajustado = valorReajuste + salario + 200;

        printf("Seu salario reajustado eh: %lf", salarioReajustado);

    } else if (salario == 2000 && tempo >= 84 && tempo <= 120) {
        valorReajuste = (salario * 10) / 100;

        salarioReajustado = valorReajuste + salario + 300;

        printf("Seu salario reajustado eh: %lf", salarioReajustado);

    } else if (salario > 2000 && tempo > 120) {
        salarioReajustado = salario + 500;

        printf("Seu salario reajustado eh: %lf",salarioReajustado);
    
    } else {
        printf("Infelizmente voce nao tem nenhum acesso a reajuste ao seu salario :(");
    }

}