#include<stdio.h>

int seq(int n){
  if(n==1){
    return 1;
  }else{
    return 2*seq(n-1)+1;
  }
}


int main(){
  int n;
  scanf("%d",&n);
  printf("%d\n",seq(n));
  return 0;
}
