#include<stdio.h>
#include<math.h>

main(){

     double numero, raiz, quadrado;

     printf("Digite o numero");
     scanf("%lf", &numero);

     if(numero >= 0){
        raiz = sqrt(numero);
        printf("A raiz quadrada eh: %lf", raiz); 
     } else {
        quadrado = pow(numero, 2);
        printf("O quadrado eh: %lf", quadrado);
     }

}