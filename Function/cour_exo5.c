#include<stdio.h>
 int n,d;
   int fact(){
     d=1 ;
      for (int i = 2; i <=n; i++)
      {
         d=d*i ;
      }
          return d ;
   }
     int main(){
          printf("entr la nombre n= ") ;
        scanf("%d",&n) ;
           d=fact() ;
            printf("%d",d) ;



        return 0 ;
     }