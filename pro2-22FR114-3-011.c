#include<stdio.h>

int min(int x,int y){
  if(x>y){
    return y;
  }else{
    return x;
  }
}

int main(){
  int a,b;

  scanf("%d%d",&a,&b);

  printf("最小値=%d\n",min(a,b));
  return 0;
}
