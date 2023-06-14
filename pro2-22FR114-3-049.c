#include<stdio.h>

char* mystrchr(char *s,char c){
  while(*s!='\0'){
    if(*s==c){
      return s;
    }
    s++;
  }
  return NULL;
}

int main(){
  char ch[]= "konnnichaminasann";
  char *p;
  p=mystrchr(ch,'o');


  if(p!= NULL){
    printf("%p\n",p);
  }else{
    printf("no\n");
  }

  return  0;
}
