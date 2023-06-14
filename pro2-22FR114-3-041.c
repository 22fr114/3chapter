#include<stdio.h>

void plus20(int *num){
   *num+=20;
}

int main(){
  int a;
  int *num;


  scanf("%d",&a);

  num=&a;

  plus20(num);
  
  

  printf("%d\n",a);
  
  return 0;
}
