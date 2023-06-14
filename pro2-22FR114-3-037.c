#include<stdio.h>
#include<math.h>

double func(int x,int y){
  double ans;
  ans=x+((double)y/pow(10,(int)(log10(y))+1));
  return ans;
}

	 

    int main(){
  int x,y;
  double ans;
  scanf("%d%d",&x,&y);
  ans=func(x,y);
  printf("%lf\n",ans);
  return 0;
  }
