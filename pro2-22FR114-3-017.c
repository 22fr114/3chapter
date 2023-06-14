#include<stdio.h>

int big(char c){

  if('a'<=c && c<='z'){
    return c-32;
  }else{
    return c;
  }
}


int main(){
  char c;  

  do{
    scanf("%c",&c);
    printf("%c\n",big(c));
  }while(c!='0');

  return 0;
}

    
