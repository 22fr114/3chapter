#include<stdio.h>

void print(int a,int b){
  printf("%d × %d = %d\n",a,b,a*b);
}

int main(){
  int i,j;
  for(i=1;i<=9;i++){
    for(j=1;j<=9;j++){
      print(i,j);
    }
  }
  return 0;
}
