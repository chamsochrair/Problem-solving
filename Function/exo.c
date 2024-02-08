#include<stdio.h>
  int N,D ;
    void multip(){
         D=1 ;
   if (N>0)
   {
     for (int i = 1; i <=N; i++)
     {
         D=D*i ;
          printf("%d\n",D) ;
     }
         
   }   else {
    printf("pls entr a nother number") ;
   }

    }
  int main(){
   printf("entr la nombre N= ") ;
    scanf("%d",&N) ;
     multip() ;

    return 0 ;
  }