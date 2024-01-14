#include<stdio.h>
#include<stdlib.h>
 int main(){
     int  TE[6], TS[6];
      for (int  i = 0; i <6; i++)
      {
        printf("TE[%d]= \n",i) ;
         scanf("%d",&TE[i]) ;
      }
      for (int j = 0; j <6; j++)
      {
        TS[5-j]=TE[j] ;
          printf("%d",TS[j]) ;
      } 
          




    return 0 ;

 }