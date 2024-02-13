#include<stdio.h>
#include<stdlib.h>
 int t[10] ;
  float s=0 ;
   float p=1 ;
    float M ;
     int soome(){
     for (int  i = 0; i <=10; i++)
     {
      s=s+t[i] ;
     }
        return s ;
     }
      int produit(){
         for (int  i = 2; i <=10; i++)
         {
            p=p*t[i] ;
         }
         return p ;
      }
         int moyen(){
           s=soome() ;
            M=s/10 ;
             return M ;
         }
              void PN (){
                 printf("\nles elment positives dan le tableaux sont ") ;
               for (int i = 0; i <=10; i++)
               {
                  if (t[i]>0)
                  {
                           printf("%d",t[i]) ;
                  }
                  
               }
                     printf("\nles elment negatives dan le tableaux sont ") ;
               for (int i = 0; i <=10; i++)
               {
                  if (t[i]<0)
                  {
                     printf("%d",t[i]) ;
                  }
                  
               }
              }
int main(){
    printf("entr les valeur de tableaux= \n ") ;
     for (int i = 0; i <= 10; i++)
     {
         printf("t[%d]= ",i+1) ;
          scanf("%d",&t[i]) ;
     }
       s=soome();
        p=produit() ;
         M=moyen();
     
 printf("la somme de tableaux est = %f\n",s);
 printf("le produit est= %f\n",p) ;
   printf("le moyenne est =%f",M) ;
    PN() ;
   return 0 ;
}
