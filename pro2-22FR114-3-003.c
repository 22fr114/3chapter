#include<stdio.h>

int one(int a){
  return a+1;
}

int main(){
  int a;

  scanf("%d",&a);

  printf("%d\n",one(a));
  return 0;
}

