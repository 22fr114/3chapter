#include<stdio.h>
#include<math.h>

typedef struct{
  double real;
  double i;
}Complex;


int quadequ(int a,int b,int c,Complex *p1,Complex *p2){
  double d=b*b-4*a*c;

  if(d<0){
    p1->real=p2->real=(-1)*b/2/a;
    p1->i=sqrt(-d)/2/a;
    p2->i=-p1->i;
    return -1;
  }else if(d==0){

    p1->real=p2->real=-b/2/a;
    return 0;
  }else{
    p1->real==(-b+sqrt(d))/2/a;
    p2->real=(-b-sqrt(d))/2/a;
    return 1;
  }
}
int main(){
  double a,b,c;
  Complex p1,p2;
  int res;


  scanf("%lf%lf%lf",&a,&b,&c);


  res = quadequ(a,b,c,&p1,&p2);

  printf("%d\n",res);

  return 0;
}

    
