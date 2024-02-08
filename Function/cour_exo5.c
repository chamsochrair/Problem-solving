#include<stdio.h>
 static int n,d;
 static  void fact(){
     d=1 ;
      for (int i = 2; i <=n; i++)
      {
         d=d*i ;
      }
           printf("%d",d) ;
   }
     int main(){
          printf("entr la nombre n= ") ;
        scanf("%d",&n) ;
          fact() ;
       



        return 0 ;
     }