#include<stdio.h>
  static int a,c,s ;
   static int sum(){
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
    