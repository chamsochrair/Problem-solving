#include<stdio.h>
   int a,c,s ;
   int sum(){
     
      s=a+c ;
       return s ;
   }
    int main (){
         
          printf("entr la nombre a= ") ;
            scanf("%d",&a) ;
          printf("entr la nombre c= ") ;
            scanf("%d",&c) ;
     s= sum( a , c) ;
       printf("%d",s) ;

        return 0 ;
    }
    