#include<stdio.h>

main(){

    double nota1, nota2, nota3, notaAluno, mediaFinal;

    printf("Insira a nota da primeira prova: \n");
    scanf("$ld", nota1);

    printf("Insira a nota da segunda prova: \n");
    scanf("$ld", nota2);

    printf("Insira a nota da terceira prova: \n");
    scanf("$ld", nota3);

    notaAluno = nota1 + nota2 + (nota3 * 2);

    mediaFinal = notaAluno / 3;

    if (media final >= 7) {
        printf("Parabens, foi aprovado!");
    }   else    {
        printf("   ");
    }

}