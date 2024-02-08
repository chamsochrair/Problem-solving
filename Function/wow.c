#include<stdio.h>
 #include<stdlib.h>
  int main(){
    int l ;
        printf("entr la nombre l = ") ;
          scanf("%d",&l) ;
       for (int i = 1 ; i <=l; i++)
       {
         for (int j = 1; j <=l-i; j++)
         {
             printf("  ") ;
         }
            for (int j = 1; j <=l; j++)
            {
               printf("* ") ;
            }
              printf("\n") ;
       }
       


    return 0 ;
  }