#include<stdio.h>

float area(float base,float h){
  return base*h/2;
}

int main(){
  float base1=3,h1=2.5,area1;

  area1=area(base1,h1);


  printf("%f\n",area1);

  return 0;

}

  
