# include<stdio.h>
# include<stdlib.h>

/*. Faça um programa para exibir a tabuada de 0 a 9 de um 
número inteiro positivo qualquer informado pelo usuário.*/
int n, i, x;

int main(){
      printf("Digite um numero:\n");
      scanf("%d",&n);
      for(i = 0 ; i <= 9; i++) {
        x = n * i;
        printf(" %d x %d = %d\n", n, i, x);
     }
    return 0;
}