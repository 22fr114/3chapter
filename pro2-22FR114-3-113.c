#include<stdio.h>
#include<math.h>
struct circle{
  float x;
  float y;
  float r;
};


int circlesIntersect(struct circle c1, struct circle c2) {
    float distance = sqrt(pow(c2.x - c1.x, 2) + pow(c2.y - c1.y, 2));
    float sumOfRadii = c1.r + c2.r;

    if (distance <= sumOfRadii) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
 
    struct circle c1 = {2.0, 3.0, 2.0}; 
    struct circle c2 = {3.0, 0.0, 1.0}; 

    int result = circlesIntersect(c1, c2);

 
    printf("%d\n",result);

    return 0;
}
