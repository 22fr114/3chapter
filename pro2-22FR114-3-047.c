#include<stdio.h>

int get(int *A,int i){
  return A[i];
}

int main(){
  int A[10]={2,4,1,8,6,0,9,21,3,5};
  int i=5,myget;


  myget=get(A,i);


  printf("%d\n",myget);

  return 0;
}

  


  


  
