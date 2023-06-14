#include<stdio.h>
#include <stdio.h>

#define DATANUM 10

void input_data(int data[], int size) {
  printf("データを入力してください:\n");
  for (int i = 0; i < size; i++) {
    scanf("%d", &data[i]);
  }
}

void output_data(int data[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  }
  printf("\n");
}

void bubble_sort(int data[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (data[j] > data[j + 1]) {
        int temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

int main() {
  int sortdata[DATANUM];

  input_data(sortdata, DATANUM);

  bubble_sort(sortdata, DATANUM);

  output_data(sortdata, DATANUM);

  return 0;
}
