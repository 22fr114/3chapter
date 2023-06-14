#include<stdio.h>
#include<math.h>

double f(int k){
  double ans=0.00;
  if(k==0) return 1;
  else{
    for(int i=1;i<k;i++){
       ans=ans*sin(i*3.14/6)+i;
    }
    return ans;
  }
}


int main(){

  int i=2;
  double a;


  a=f(i);


  printf("%lf\n",a);
  return 0;
}

  
