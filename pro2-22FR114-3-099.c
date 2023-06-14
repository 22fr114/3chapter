#include<stdio.h>

void insertsort(int d[],int n){
  int i,j,k;

  for(i=1;i<n;i++){
    k=d[i];
    j=i-1;

    while(j>=0 && d[j]>k){
      d[j+1]=d[j];
      j--;
    }

    d[j+1] = k;
    for(int s=0;s<n;s++){
      printf("%d ",d[s]);
    }
    printf("\n");
  }
  
}

int main(){
  int i,d[] = {3,5,1,9,6};
  int n = sizeof(d)/sizeof(d[0]);

  insertsort(d,n);

  for( i = 0; i < n; i++) {
    printf("%d ", d[i]);
  }


  return 0;
}

  
