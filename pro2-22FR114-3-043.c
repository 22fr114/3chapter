#include<stdio.h>

int get(int (*array)[2],int i,int j){
  return array[i][j];
}

int main(){
  int array[3][2] = {{13,3},{5,2},{1,2}};
  int i=1,j=1;

  int num;
  num = get(array,i,j);
  printf("(%d,%d)=%d\n",i,j,num);
  return 0;
}
