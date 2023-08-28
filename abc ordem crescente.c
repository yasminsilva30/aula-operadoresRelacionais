#include<stdio.h>

main(){

    int A = 20, B = 10, C = 30;

    printf("Seguindo a ordem crescente... \n");

    if (A < B && A < C){
        printf("A eh o primeiro \n");
        if (B < C){
            printf("B eh o segundo \n");
            printf("C eh o terceiro \n");
        } else {
            printf("C eh o segundo \n");
            printf("B eh o terceiro \n");
        }
    } else if (B < A && B < C) {
        printf("B eh o primeiro \n");
        if (A < C) {
            printf("A eh o segundo \n");
            printf("C eh o terceiro \n");
        } else {
            printf("C eh o segundo \n");
            printf("A eh o terceiro \n");
        }
    } else {
        printf("C eh o primeiro \n");
        if (A < B) {
            printf("A eh o segundo \n");
            printf("B eh o terceiro \n");
        } else {
            printf("B eh o segundo \n");
            printf("A eh o terceiro \n");
        }
    }

}