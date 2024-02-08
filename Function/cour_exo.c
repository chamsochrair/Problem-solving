#include<stdio.h>
 int puissance(int n){
    int p ;
     p=n*n ;
    return p ;
 }
   int main(){
    int n, p;
     printf("entr la nombre n= ") ;
      scanf("%d",&n) ;
         puissance(n) ;
     p=puissance(n) ;
             printf("la puissance de %d et %d",n,p) ;
    return 0 ;
   }