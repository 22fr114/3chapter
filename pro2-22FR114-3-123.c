#include <stdio.h>
#include <math.h>

double triangle(double xa, double ya, double xb, double yb, double xc, double yc) {
    double area = 0.5 * fabs(xa * (yb - yc) + xb * (yc - ya) + xc * (ya - yb));
    return area;
}

int main() {
    double xa = 1, ya = 1;
    double xb = -5, yb = 3;
    double xc = 3, yc = -3;

    double area = triangle(xa, ya, xb, yb, xc, yc);
    printf("三角形の面積: %f\n", area);

    double xd = -1, yd = -1;
    double quadArea = triangle(xa, ya, xb, yb, xc, yc) + triangle(xa, ya, xc, yc, xd, yd);
    printf("四角形の面積: %f\n", quadArea);

    return 0;
}
