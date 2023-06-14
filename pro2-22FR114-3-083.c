#include<stdio.h>


int count1(const char *a){
  int count =0;

  while (*a!='\0'){
    count++;
    a++;
  }
  return count;
}


const char  *count(const char *x,const char *y){
  int l1,l2;
  l1=count1(x);
  l2=count1(y);

  if(l1>l2){
    return x;
  }else{
    return y;
  }
}



int main(){
  const char *a="TokyoDenkiUnivercity";
  const char *b="Computers and Systems Engineering";

  const char *c=count(a,b);


  printf("%s\n",c);

  return 0;
}
