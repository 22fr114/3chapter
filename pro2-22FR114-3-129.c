#include <stdio.h>
#include <math.h>


double length(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = sqrt(dx * dx + dy * dy);
    return distance;
}


double triangle(double a, double b, double c) {
    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    double x1 = 0, y1 = 0;
    double x2 = 3.75, y2 = 2.84;
    double x3 = -1.26, y3 = 4.35;


    double a = length(x1, y1, x2, y2);
    double b = length(x2, y2, x3, y3);
    double c = length(x3, y3, x1, y1);


    double area = triangle(a, b, c);

    printf("三角形の面積: %f\n", area);

    return 0;
}
