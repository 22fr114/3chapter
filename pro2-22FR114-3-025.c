#include<stdio.h>
int stamp(int pos){
  int count=0,i,j;
  for(i=0;i<=pos/50;i++){
    for(j=0;j<=pos/80;j++){
      if(i*50+j*80==pos){
	count++;
      }
    }
  }
  return count;
}

int main(){
  int pos,count;
  scanf("%d",&pos);
  count = stamp(pos);
  printf("%d\n",count);
  return 0;
}
