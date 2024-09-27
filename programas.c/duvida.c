#include<stdio.h>
#include<stdlib.h>

int p1 = 3, p2 = 2, p3 = 1, vencedor= 0 ;


int main()
{
 if(p1 > p2 && p1 >p3)
 {
    vencedor = p1;
 } 
if (p2 > p1 && p2 > p3)
{
  vencedor = p2;
 }
  else{
    vencedor = p3;
   }

   
        
  
       
 
printf("%d", vencedor);





    return 0;

}