#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que crie um vetor denominado A que 
armazene 8 números inteiros. O programa deve executar os 
seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 3;
(b) Armazene em uma variável inteira (simples) a soma entre 
os valores das posições A[0], A[1] e A[5] do vetor e mostre na 
tela esta soma;
(c) Modifique o vetor na posição 4, atribuindo a esta posição 
o valor 239;
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/



int main(){
    int vetor[8];
    int soma = 0;
    int i;



  for( i = 0; i < 8; i ++)
  {
    printf("Digite um valor  \n");
    scanf("%d", &vetor[i]);
  
  }
   
   soma =  soma + vetor[0] + vetor[1] + vetor[5];
 
   printf(" A soma e %d\n", soma);

   vetor[4] = 239;
   
   for (i = 0 ; i < 8 ; i ++){
    printf("%d\n", vetor[i]);
   }

  
   
   
   
 




 return 0;
}
