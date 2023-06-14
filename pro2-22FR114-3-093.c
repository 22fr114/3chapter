#include<stdio.h>

void swap_word(char *a,char *b,char *c){
  char temp=*a;
  *a=*b;
  *b=*c;
  *c=temp;
    }

int main(){
  char a[]="a";
  char b[]="b";
  char c[]="c";



  swap_word(&a[0],&b[0],&c[0]);


  printf("%s%s%s\n",a,b,c);

  return 0;
}
