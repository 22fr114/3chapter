#include<stdio.h>

#define TOTAL 10
#define ATARI 5
#define KUJI 3

int kaijo(int n){
  int ans=1,i;
  for(i=n;i>=1;i--){
    ans*=i;
  }
  return ans;
}

int main(){
  double p;

  p=(double)kaijo(ATARI)*kaijo(TOTAL-KUJI)/kaijo(TOTAL)/kaijo(ATARI-KUJI);
  

  printf("%f\n",p);

  return 0;
}

 
