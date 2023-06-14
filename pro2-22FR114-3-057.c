#include<stdio.h>
#include<math.h>

struct Point{
  double x;
  double y;
};

double area(struct Point p1,struct Point p2,struct Point p3){
     double a, b, c, s;
  
   a = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    b = sqrt(pow(p3.x - p2.x, 2) + pow(p3.y - p2.y, 2));
    c = sqrt(pow(p1.x - p3.x, 2) + pow(p1.y - p3.y, 2));

    s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main(){
  struct Point a={1,4};
  struct Point b={6,2};
  struct Point c={13,5};

  printf("%lf\n",area(a,b,c));
  return 0;
}
