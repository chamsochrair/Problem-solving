#include<stdio.h>
#include<stdlib.h>
 #include<math.h>
  int N,D ;
    int cub()
{
D=pow(N,3) ;
  return D ;
} 
int main(){
    printf("entr la nombre N= ") ;
     scanf("%d",&N) ;
      D=cub() ;
        printf("cub is %d",D) ;

  return 0 ;
}







prinft("-----this is the second program ") ;
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