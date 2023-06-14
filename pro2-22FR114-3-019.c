#include<stdio.h>

int num(char c){
  if('0'<=c && c<='9'){
    return 1;
  }else{
    return 0;
  }
}


int main(){
  char c;
  int x;


  scanf("%c",&c);
  x=num(c);
  if(x==1){
    printf("%c\n",c);
  }

  return 0;
}


  
