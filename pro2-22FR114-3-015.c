#include<stdio.h>

int power(int x){
  return x*x;
}

int main(){
  int i;

  for(i=1;i<=20;i++){
    printf("%d\n",power(i));
  }

  return 0;
}

