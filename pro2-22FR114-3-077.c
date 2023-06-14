#include<stdio.h>
#include<string.h>

int mystrcmp(const char *s1,const char *s2){
  while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 > *s2) {
            return 1;
        } else if (*s1 < *s2) {
            return -1;
        }
        s1++;
        s2++;
    }

    if (*s1 == '\0' && *s2 == '\0') {
        return 0;
    } else if (*s1 == '\0') {
        return -1;
    } else {
        return 1;
    }
}

int main(){
  const char *a[]={  "zero", "one", "two", "three", "four", "five",
		    "six", "seven", "eight", "nine"};


  char in[10][10];
    int i;

  for(i=0;i<10;i++){
    scanf("%s",in[i]);
  }

 int correct = 1;
    for (i = 0; i < 10; i++) {
        if (strcmp(in[i], a[i]) != 0) {
            printf("%d: %s\n", i, a[i]);
            correct = 0;
        }
    }

    if (correct) {
        printf("Seikai\n");
    }

    return 0;
}
    
