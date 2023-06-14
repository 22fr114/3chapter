#include<stdio.h>

int is(int *ptr1,int *ptr2){
  if (*ptr1 == *ptr2){
    return 1;
  }else{
    return 0;
  }

}

int main(){
  int a=10,b=20,*ptr1=&a,*ptr2=&b;

  printf("%d\n",is(ptr1,ptr2));

  return 0;
}
