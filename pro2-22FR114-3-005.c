#include<stdio.h>

double power(double a,int n){
  double ans = 1;
  int i;
  for(i=1;i<=n;i++){
    ans*=a;
  }
  return ans;
}

int main(){
  double a=3;
  int n=4;

  printf("%f\n",power(a,n));
  return 0;
}



  
