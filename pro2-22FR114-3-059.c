#include<stdio.h>
#include<string.h>


typedef struct{
  float radius;
  float height;
}SIZE;

float Volume(SIZE x,char *y){
  if(strcmp(y,"CONE") == 0){
    return 1.0/3.0*3.14*x.radius*x.radius*x.height;
  }else if(strcmp(y,"PILLAR") == 0){
    return 3.14*x.radius*x.radius*x.height;
  }else{
    return 0;
  }
}

int main(){

  SIZE s={2.0,10.0};

  char a[]="CONE";
  char b[]="PILLAR";
  char c[10];

  scanf("%s",c);

  printf("%f\n",Volume(s,b));
  return 0;
}
