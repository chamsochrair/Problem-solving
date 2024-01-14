#include<stdio.h>
#include<stdlib.h>
 int main(){
 int s[10],n,x ;
    for (int i = 0; i < 10 ;i++)
    {
        printf("s[%d]= ",i);
         scanf("%d",&s[i]) ;
    }
    x=0 ;
         printf("entr la valeur de n= ") ;
          scanf("%d",&n) ;
         for (int  i = 0; i <10; i++)
         {
            if(s[i]==n){
                 x++ ;
            }
         }      
          if (x==0)
          {
            printf("%d nz se trouve pas en tableaux");
          }else{
             printf("%d  se trouve  en tableaux");
          }
          
         



    return 0 ;
 }