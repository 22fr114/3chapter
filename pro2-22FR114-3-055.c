#include<stdio.h>
#include<math.h>
struct point{
  double x;
  double y;
  double z;
};
double distance(struct point  a,struct point b){
  return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2)+pow(b.z-a.z,2));
}

int main(){
  struct point p1={1.0,5.0,3.0};
  struct point p2={2.0,6.0,2.0};

  printf("%lf\n",distance(p1,p2));
	 return 0;

	 }
    
  
  
  
