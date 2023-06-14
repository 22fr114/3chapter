#include<stdio.h>
int mtmax(int *a,int i,int j){
  int max = i;
    for(int k=i+1;k<=j;k++){
    if(a[k]>a[max]){
      max=k;
    }
  }
  return max;
}

int main(){
  int a[]={3,1,5,9,4,2};
  int i=1,j=4;
  int max;
    max=mtmax(a,i,j);
  printf("%d\n",max);

  return 0;
  
}
