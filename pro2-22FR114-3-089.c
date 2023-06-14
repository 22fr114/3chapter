#include<stdio.h>

struct address{
  int number;
  char name[20];
};


void output(struct address *in){

  printf("%s\n",in->name);
}





int main(){
  struct address people[5];

  int i;

  for(i=0;i<5;i++){
    scanf("%d",&(people[i].number));
    scanf("%s",people[i].name);
  }

  for(i=0;i<5;i++){
    output(&people[i]);
  }

  return 0;
}

  
