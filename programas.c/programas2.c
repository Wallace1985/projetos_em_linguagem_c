#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int m1[2][2], m2[2][2], sm[2][2], soma, s1, s2, i, j, maior;
bool inc = true;
 //Essa é a primeia questão de L.P



int main()
{
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("digite o valor da coluna %d e da linha %d: ", i, j);
        scanf("%d",&m1[i][j]);
         if(m1[i][j] < 0)
        {
            printf("digite um numero positivo!\n");
     
        }
    }
    
}
for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        printf("digite o valor da coluna %d e da linha %d: ", i, j);
        scanf("%d",&m2[i][j]);
         if(m2[i][j] > 0)
        {
            printf("digite um numeo negativo!\n");
        
        }
    }
    
}

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        
        if(j %2 >= 0)
        {
            s1 = s1 + m1[i][j];
        
        }
    }
    
}


for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        
        if(j %2 == 0)
        {
            s2 = s2 + m2[i][j];
        
        }
    }
    
}
soma = s1 + s2;

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        
        sm[i][j] = m1[i][j] + m2[i][j];
    }
    
}

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
    {
        if(inc == true)
        {
           maior =  sm[i][j];
        
        }
          inc = false;
       if ( sm[i][j]> maior)
       {
        maior = sm[i][j];
       }
       
    }
    
}

printf("m1 + m2 = sm:\n");

for ( i = 0; i < 2; i++)
{
    for ( j = 0; j < 2; j++)
        printf("%d ",sm[i][j]);
        printf("\n");
    
}
printf("\na soma das colunas pares de m1 e m2 e: %d", soma);
printf("\no maior valor da matrix formada da  m1 e m2 e: %d", maior)

    return 0;
}

loren

