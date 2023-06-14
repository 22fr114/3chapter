#include<stdio.h>

int one_zero(int n){
  if(n%2==0){
    return 0;
  }else if(n%2==1){
    return 1;
  }
}

int main(){
  int num,ans;

  scanf("%d",&num);

  ans=one_zero(num);

  if(ans==0){
    printf("偶数です\n");
  }else{
    printf("奇数です\n");
  }

  return 0;
}

  
