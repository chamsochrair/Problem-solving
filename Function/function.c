#include<stdio.h>
 #include<stdlib.h>
 int fib(int n){
    if (n<2)
    {
        return n ;
    }  else{
        return fib(n-1) + fib(n-2) ;
    }
  int main(){
 int n ;
   printf("entr la nombre n= ") ;
      scanf("%d",&n) ;
         printf("%d",fib(n)) ;
    




    return 0 ;
  }