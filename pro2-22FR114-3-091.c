#include<stdio.h>


void swap(char *a,char *b){
  char tmp;
  tmp=*a;
  *a=*b;
  *b=tmp;
}


void rotate(char *str){
  int l=0;
  while(str[l]!='\0'){
    l++;
  }

  if(l<=1){
    return ;
  }

  for(int i=0;i<l;i++){
  swap(&str[l-1],&str[i]);
  }
  

}

int main(){
  char str[]="abcde";


  rotate(str);

  printf("%s\n",str);
  return 0;
}


  
