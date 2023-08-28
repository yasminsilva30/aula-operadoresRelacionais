#include<stdio.h>

main(){

    int A = 10, B = 15, C = 20, D = 25;

    if (A > B && A > C && A > D){
        printf("A eh o maior");
        if (B < C && B < D){
        printf("B eh o menor");
        } else if (C < B && C < D){
            printf("C eh o menor");
        } else {
            printf("D eh o menor");
        }
    } else if (B > A && B > C && B > D){
        printf("B eh o maior");
        if (A < C && A < D){
        printf("A eh o menor");
        } else if (C < A && C < D){
            printf("C eh o menor");
        } else {
            printf("D eh o menor");
        }
    } else if (C > A && C > B && C > D){
        printf("C eh o maior");
        if (A < B && A < D){
        printf("A eh o menor");
        } else if (B < A && B < D){
            printf("B eh o menor");
        } else {
            printf("D eh o menor");
        }
    } else {
        printf("D eh o maior");
        if (A < B && A < C){
        printf("A eh o menor");
        } else if (B < A && B < C){
            printf("B eh o menor");
        } else {
            printf("C eh o menor");
        }
    }

}