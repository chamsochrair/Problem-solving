#include<stdio.h>
#include<stdlib.h>
int main(){
   float t[4];
    float s,M ;
     for (int i = 0; i <4; i++)
     {
        printf("entr la note  de etudient%d: ",i+1);
         scanf("%f",&t[i]);
     }
      s=0 ;
       for (int i = 0; i <=4; i++)
       {
        s=s+t[i] ;
       }
        M=s/4 ;
         printf("la maoyenne = %f",M);       


   
    
  
     
  return 0 ;
}
  
 