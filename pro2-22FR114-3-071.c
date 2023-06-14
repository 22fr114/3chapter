#include <stdio.h>

void extractstr(char *str) {
    str[5] = '\0';
}

char* mystrcat(char *s1, const char *s2) {
    char *ptr = s1;

    while (*ptr != '\0') {
        ptr++;
    }

    while (*s2 != '\0') {
        *ptr = *s2;
        ptr++;
        s2++;
    }

    *ptr = '\0';

    return s1;
}

int main() {
    char str1[] = "konnnitiha";
    char str2[] = " himadesu";

    printf("%s\n", str1);

    extractstr(str1);
    printf("%s\n", str1);

    mystrcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
