#include<stdio.h>


void innum(int n,int s[n][n]){
  int i,j;

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    s[i][j]=i+j;
  }
}
}



void plus(int n,int A[n][n],int B[n][n]){
  int i,j;
  int s[n][n];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      s[i][j]=A[i][j]+B[i][j];
      printf("%d\n",s[i][j]);
    }
  }
 
}


int main(){
  int n=3;
  int a[n][n],b[n][n];

  innum(n,a);
  innum(n,b);

  plus(n,a,b);

  return 0;
}
 

  
  
  
      
