#include<stdio.h>
 int N,estpremier ;
  estpremier=1 ;
     void estpaire(){
        for (int i = 2; i <=N/2; i++)
        {
         if(N%i==0){
            estpremier=0;
             break;
         } 
         
        } if (estpremier==1)
         {
            printf("this number is premier"); 
         }  else{
                printf("this numbre is not premier") ;

         }
        
     }
       int main (){
 printf("entr la  nombre N= ") ;
   scanf("%d",&N) ;
     estpaire() ;




         return 0 ;
       }
                  