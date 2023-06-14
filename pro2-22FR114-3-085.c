#include <stdio.h>

int compare(const char* x, const char* y) {
    int i = 0;
    
    while (x[i] != '\0' || y[i] != '\0') {
        if (x[i] < y[i])
            return -1;
        else if (x[i] > y[i])
            return 1;
        i++;
    }
    
    return 0;
}

int main() {
  const char *a="konnnitiha";
  const char *b="ohayougozaimasu";


  int ans=compare(a,b);

  printf("%d\n",ans);

  return 0;
}
