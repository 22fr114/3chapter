#include<stdio.h>

float absolute(float x) {
    if (x >= 0) {
        return x;
    } else {
        return -x;
    }
}

int main(void){
  float x,ans;

  scanf("%f",&x);
  ans=absolute(x);
  printf("%f\n",ans);
  return 0;
}











