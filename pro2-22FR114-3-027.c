#include <stdio.h>
#include <math.h>

double other(double a);
double cal(double value);

int main() {
  double value,i, m;
  int count = 0;
  double s[6]={20,15.8,40.2,24.8,19.962,55.2};

    do {
        scanf("%lf", &value);

        if (value != -1) {
            m = cal(value);
            printf("%lf\n", m);
	   
        }
    } while (value != -1);


    for(int i=0;i<6;i++){
      printf("%lf\n",other(s[i]));
    }
    
   return 0;
}

double cal(double value) {
    static double values[100] = {0};
    static int n = 0;
    double m = 0.0;
    int i;
      

    values[n] = value;
    n++;

    for (i = 0; i < n; i++) {
        m += pow(values[i], 2);
    }
    m = sqrt(m);
    m =m/n;

    return m;
}

double other(double a){

  static double b[6]={0};
  static int n=0;
  double m =0.0;
  int i;
  
  
  b[n]=a;
  n++;

for (i = 0; i < n; i++) {
    m += pow(b[i], 2);
}
m = sqrt(m);
 m =m/n;

return m;
}


