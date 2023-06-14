#include<stdio.h>

int setary(int *a){
  int i,j;
  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      scanf("%d",&a[i*10+j]);
    }
  }
}

int main(){
  int a[10][10]={};


  setary(&a[10][10]);
  return 0;
}

	    
