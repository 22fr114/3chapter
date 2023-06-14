#include<stdio.h>

float *float_array_max_p(float A[],int size){
  float *max=&A[0];
  int i;
  
  for(i=1;i<size;i++){
    if(A[i]>*max){
      max=&A[i];
    }
  }
      
  return max;
}


int main(){
  float A[]={1.1,3.3,43.2,2.4,3,4,7,3.2,6.4,4.3};
  int size=9;
  float *max=float_array_max_p(A,size);

  printf("%f\n%p\n",*max,max);
  return 0;
}

				      
