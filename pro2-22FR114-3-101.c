#include<stdio.h>

int select(int a[],int p,int q){
  int x=a[p],b=a[2],c=a[q],tmp;


  if(x>c){
    if(c>b){
      return q;
    }else if(x>b){
      return 2;
    }else{
      return p;
    }
  }
  
  if(c>x){
    if(b>c){
      return q;
    }else if(b>x){
      return 2;
    }else{
      return p;
    }

  }
}

int main(){
  int a[]={2,5,7,3,2};
  int p=0,q=2,ans;


  ans=select(a,p,q);

  printf("%d\n",ans);

  return 0;
}

  
  
  
