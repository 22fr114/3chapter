#include<stdio.h>

int Suuretsu2(int n){
  int a=1,b,i;

  for(i=2;i<=n;i++){
    b=(a+1)*(a+1)-2*a;
    a=b;
  }
  return a;
}

int main(){
  int i;
  for(i=1;i<=8;i++){
    printf("a%d =%d\n",i,Suuretsu2(i));
  }
  return 0;
}
