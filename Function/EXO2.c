#include<stdio.h>
   static int anne ;
 static  void prexu(){
       if((anne%4==0 && anne%100!=0)||(anne%400==0)){
       printf("this anne cabisa") ;
       
       }else{ 
                printf("this anne is not cabisa") ;
          }
   }
    int main(){
      printf("entr la anne=  ") ;
       scanf("%d",&anne) ;
        prexu() ;
           



        return 0 ;
    }