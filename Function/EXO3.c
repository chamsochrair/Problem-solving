#include<stdio.h>
  int N , nbr=0;
   
       int nbro(){
           do
           {
            N=N/10 ;
              nbr++ ;
           } while (N!=0);
             return nbr ;
       }
        int main(){
                printf("entr la nombre N= ") ;
                    scanf("%d",&N) ;
                     nbr=nbro() ;
                      printf("this numbre is %d",nbr) ;


            return 0 ;
        }
        
       