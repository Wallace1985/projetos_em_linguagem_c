#include<stdio.h>
#include<stdlib.h>
#include<float.h>
/*Faça um programa em C que calcula e escreve a seguinte 
soma: 1/1 + 3/2 + 5/3 + 7/4 + ... + 39/20. Exibir a sequência 
dos numeradores e denominadores, bem como a expressão.*/
   float soma;
   int i;
int main(){
   soma = 0;
    for (i = 1; i <= 20; i++){
        soma = soma +  (float)((i * 2) - 1)/i;
        printf("%d/%d +   =  %.2f ", i * 2 - 1, i, soma);

   }

    return 0;
}