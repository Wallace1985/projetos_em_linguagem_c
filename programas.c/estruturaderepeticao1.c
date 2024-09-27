# include<stdio.h>
# include<stdlib.h>
# include<stdbool.h>
/*Escreva um programa que leia 15 valores reais quaisquer e 
exiba o maior e o menor destes valores.*/

int num;
int i;
int maior_num ;
int menor_num ;
bool iniciodeleitura = true;
int main ()
{
  
  for(i = 0 ; i < 5 ; i++ ){
     printf(" Digite um numero :\n");
     scanf("%d", &num);
     
  
     if(iniciodeleitura == true ){
       maior_num = num;
       menor_num = num;
     }     
     iniciodeleitura = false;
   
   if(num > maior_num){
      maior_num = num;

   }
     if ( num < menor_num)
      menor_num = num;
}
   printf("O maior numero e %d\n", maior_num);
   printf("O menor numero e %d\n", menor_num);
  
 return 0;
}