#include<stdio.h>
 #include<math.h>
   int  a,b,c ;
    float Delta,x,x1,x2 ;
    void saiser(){
       printf("entr la nombre a= ") ;
        scanf("%d",&a) ;
         printf("entr la nombre b= ") ;
          scanf("%d",&b) ;
           printf("entr la nombre c= ") ;
            scanf("%d",&c)  ;
    }
      float delta (){
         Delta=pow(b, 2)- 4* (a+c) ;
         return Delta  ;
      }
          void count (){
             if (Delta<0)
             {
                printf("no soultions ") ;
             }else if (Delta==0)
             {
                x=(-b)/(2*a) ;
                   printf("x= %f",x) ;     
             } else{
                x1=(-b - sqrt (Delta))/(2*a)  ;             
                  x2=(-b+ sqrt (Delta))/(2*a) ;
                   printf("x1= %f\n",x1) ;
                    printf("x2= %f",x2) ;
             }
                
          }
             int main(){
                saiser();
                Delta= delta() ;
                   count() ;
                return 0 ;
             }