#include<stdio.h>

typedef struct {
  char name[100];
  char gender;
  int age;
  double height;
  double weight;
} INDINFOR;


void setindinfor(INDINFOR *p) {
  printf("名前: ");
  scanf("%s", p->name);

  printf("性別: ");
  scanf(" %c", &(p->gender));

  printf("年齢: ");
  scanf("%d", &(p->age));

  printf("身長: ");
  scanf("%lf", &(p->height));

  printf("体重: ");
  scanf("%lf", &(p->weight));
}


int main() {
  INDINFOR info;
  setindinfor(&info);
  
  // 入力された情報の確認
  printf("入力された情報:\n");
  printf("名前: %s\n", info.name);
  printf("性別: %c\n", info.gender);
  printf("年齢: %d\n", info.age);
  printf("身長: %.2lf\n", info.height);
  printf("体重: %.2lf\n", info.weight);
  
  return 0;
}
