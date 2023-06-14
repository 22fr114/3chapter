#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double estimatePi(int N) {
    int n = 0;

    for (int i = 0; i < N; i++) {
        double x = (double)rand() / RAND_MAX;
        double y = (double)rand() / RAND_MAX;

        if (x * x + y * y <= 1) {
            n++;
        }
    }

    double pi = 4.0 * n / N;
    return pi;
}

int main() {
    int N = 10000000;

    
    srand(time(NULL));

    double pi = estimatePi(N);
    printf("%f\n", pi);

    return 0;
}
