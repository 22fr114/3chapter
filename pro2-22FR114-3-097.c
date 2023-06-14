#include<stdio.h>

void swap(int *a,int *b){
  if(*a>*b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
  }
}

void sort(int a[],int size){
  int i,j;
  for(i=0;i<size;i++){
    for(j=0;j<size-i-1;j++){
      swap(&a[j],&a[j+1]);
    }
  }
}

      


int main(){
  int arr[] = {2,4,7,2,9};
  int size = sizeof(arr)/sizeof(arr[0]);

  sort(arr,size);

  for(int i=0;i<size;i++){
    printf("%d\n",arr[i]);
  }

  return 0;
}


  
