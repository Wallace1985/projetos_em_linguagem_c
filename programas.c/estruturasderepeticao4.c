#include<stdio.h>
#include<stdlib.h>

/*Faça um programa que calcule o produto dos números 
digitados pelo usuário. O programa deve permitir que o 
usuário digite uma quantidade não determinada de números 
e deve encerrar quando o usuário digitar o valor zero.*/

int n, n2, teste;
int p;
int main()
{
  do{
     printf("Digite um numero: \n");
     scanf("%d", &n);
     printf("Digite outro numero: \n");
     scanf("%d", &n2);

     p = n * n2;

     printf(" O produto dos numero digitados e: %d", p);

     printf(" Voce deseja fazer outro processamento ? digite 1 para sim e 0 para nao\n");
     scanf("%d", &teste);
  }  while( teste == 1);
      

      return 0 ;
}
