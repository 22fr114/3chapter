#include<stdio.h>
#include<math.h>

int QuadEq(float a,float b,float c,float* r1,float* r2){
  float dis=b*b-4*a*c;
  if(a==0){
    return -1;
  }else if(dis>=0){
    *r1 = (-b + sqrt(dis))/(2*a);
    *r2 = (-b - sqrt(dis))/(2*a);
    if(dis==0){
      return 1;
    }else{
      return 1;
    }
  }else{
    *r1 = -b/(2*a);
    *r2 = sqrt(-dis)/(2*a);
    return 0;
  }
}


int main(){
  float a=2,b=2,c=5,r1,r2;
  int ans=QuadEq(a,b,c,&r1,&r2);
  if(ans==-1){
    printf("a==0\n");
  }else if(ans==0){
    printf("%f+%fi,%f-%fi\n",r1,r2,r1,r2);
  }else{
    printf("%f,%f\n",r1,r2);
  }
  return 0;
}

    
