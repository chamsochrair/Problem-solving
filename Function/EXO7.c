 #include <stdio.h>
int T[10], max, min,Ts[10];
int findMax() {
   max=T[0] ;
    for (int i = 0; i < 10; i++) {
        if (max < T[i]) {
            max = T[i];
        }
    }
    return max;
}
int findMin() {
          min=T[0] ;
    for (int i = 0; i < 10; i++) {
        if (min > T[i]) {
            min = T[i];
        }
    }
    return min;
}
    void func3(){
          for (int i = 0; i <10; i++)
         {
           Ts[9-i]=T[i] ;
         }
              printf("l invers de n est=\n ") ;
                for (int i = 0; i <10; i++)
                {
                   printf("T[%d]= %d\n",Ts[i],i+1);
                }
    }
int main() {
    int max, min;
    printf("Enter the elements of the array:\n ");
    for (int i = 0; i < 10; i++) {
         printf("T[%d]= ",i+1) ;
          scanf("%d",&T[i]) ;
    }
    max = findMax();
    min = findMin();
     func3() ;
    printf("The maximum element is: %d\n", max);
    printf("The minimum element is: %d\n", min);
    return 0;
}


































































