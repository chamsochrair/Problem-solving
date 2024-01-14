#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  main() {
  int t[10] ;
     float p,s ;
   for (int i = 0; i <10; i++)
   {
    printf("t[%d]= ",i+1);
       scanf("%d",&t[i]);
          printf("%d",t[i]);
   }
         s=0 ;
             p=1 ;
              for (int  i = 0; i <10; i++)
              {
                s+=t[i] ;
                p=p*t[i] ;
              }
                  printf("la somme = %.2f\n",s);
                   printf("le prouduit= %.2f\n ",p) ; 

    
           
    
 
     
 
 

 return 0 ;  
} 
