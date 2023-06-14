#include<stdio.h>

float area(float base,float h){
  return base*h/2;
}

int main(){
  float base1=3,h1=2.5,base2=2.9,h2=4.2,area1,area2;

  area1=area(base1,h1);
  area2=area(base2,h2);


  printf("%f\n%f\n",area1,area2);

  return 0;

}

  
