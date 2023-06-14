#include <stdio.h>

int nCr(int n, int r) {
    if (r == 0 || r == n) {
        return 1;
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main() {
    int n, r;

    printf("n を入力してください: ");
    scanf("%d", &n);
    printf("r を入力してください: ");
    scanf("%d", &r);

    int result = nCr(n, r);
    printf("%dC%d = %d\n", n, r, result);

    return 0;
}
