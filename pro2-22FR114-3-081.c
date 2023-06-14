#include <stdio.h>
#include <string.h>

int strsearch(const char *x, const char *y) {
    int x_length = strlen(x);
    int y_length = strlen(y);

    for (int i = 0; i <= x_length - y_length; i++) {
        int j;

        for (j = 0; j < y_length; j++) {
            if (x[i + j] != y[j]) {
                break;
            }
        }

        if (j == y_length) {
            return i + 1;
        }
    }

    return -1;
}

int main() {
    const char *x = "This is a test string.";
    const char *y = "test";

    int position = strsearch(x, y);

    if (position != -1) {
        printf("'%d'\n", position);
    } else {
        printf("'%s' not found in '%s'\n", y, x);
    }

    return 0;
}
