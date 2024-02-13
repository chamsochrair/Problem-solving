#include<stdio.h>
   int T[10],Temp ;
    void remplir(){
        for (int i = 0; i <10; i++)
        {
            printf("T[%d]= ",i+1) ;
             scnaf("%d",&T[i]) ;
        }
    }
        void terier(){
      for (int i = 0; i <10; i++)
      {
          for (int j = i+1; j <10; j++)
          {
            if (T[i]>T[j])
            {
                Temp=T[i] ;
                 T[i]=T[j] ;
                 T[j]=Temp ;
            }
          }
      }
           printf("\n les element de tableaux est croissant")      ;

        }
        void terir(){
      for (int i = 0; i <10; i++)
      {
          for (int j = i+1; j <10; j++)
          {
            if (T[i]<T[j])
            {
                Temp=T[i] ;
                 T[i]=T[j] ;
                 T[j]=Temp ;
            }
          }
      }
           printf("\n les element de tableaux est deroissant :")      ;
       
      

        }
        
     int main(){
       


        
       }
        return 0 ;
     }