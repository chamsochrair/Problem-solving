#include<stdio.h>
#include<stdlib.h>
 int main (){
 int L ;
  printf("entr mla nombre l=  ") ;
   scanf("%d",&L) ;
    
       for (int i = 1; i <=L; i++)
       {
        for (int j = 1; j <=i; j++)
        {
            printf("* ") ;
        }
          printf("\n") ;
       }
        

    return 0 ;
 }