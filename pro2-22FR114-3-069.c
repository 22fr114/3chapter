#include <stdio.h>
#include<string.h>

char *_strchr(const char *str, char  ch) {
    while (*str != '\0') {
        if (*str == ch) {
	  return (char*)str;
        }
        str++;
    }
    return NULL;  
}

int main() {
    char str[] = "This is a pen.";
    char ch = 'p';

    char *result = strchr(str, ch);

    if (result != NULL) {
        printf("%c %p\n", ch, result);
    } else {
        printf( "'%c' no\n", ch);
    }

    return 0;
}

