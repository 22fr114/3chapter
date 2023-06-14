#include<stdio.h>

void shinai(char *tel){
  int i=1;


  for(i=2;i<6;i++){
    printf("%c",*(tel+i));
  }
  printf("\n");
  
}


int main(){

  char a[]="0312345678";


  shinai(a);

  return 0;
}
