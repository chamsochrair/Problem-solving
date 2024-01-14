#include<stdio.h>
#include<stdlib.h>

int permute(int a, int b){
  int t;
  t = a;
  a = b;
  b = t;
  return a;

}

int main(){
  int x = 5;
  int y = 10;

  int c = permute(x, y);
  printf("%d",c) ;
}