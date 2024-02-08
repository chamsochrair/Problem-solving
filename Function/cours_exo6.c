#include<stdio.h>
     int a ;
      void pair(){
       if (a%2==0 && a!=0)
       {
         printf("this numbre is pair") ;
       }
         else{
        printf("this numbre is impair") ;
       }
          
      }
       int main(){
         printf("entr la nombre a= ") ;
          scanf("%d",&a) ;
            pair() ;

        return 0 ;
       }