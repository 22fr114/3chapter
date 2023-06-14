#include <stdio.h>
#include <stdlib.h>

int main() {

  char* stlist;


  stlist = (char*)malloc(100 * sizeof(char));

  printf("データを入力してください: ");
  scanf("%99s", stlist);

  
  printf("入力されたデータ: %s\n", stlist);

  
  free(stlist);

  return 0;
}
