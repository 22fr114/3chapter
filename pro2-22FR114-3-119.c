#include <stdio.h>
#include<math.h>

int c(int k) {
    int a0 = 1, a1 = 1;
    int ak,i;

    if (k == 0 || k == 1) {
        return 1;
    }

    for ( i = 2; i <= k; i++) {
      ak =c(k-1)*(k-2) +pow(2,k); 
    }

    return ak;
}

int main() {
    int k = 10;
    int result = c(k);
    printf("%d\n", result);

    return 0;
}
