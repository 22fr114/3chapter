#include<stdio.h>

void input_score(int score[],int size){
  int i;


  for(i=0;i<size;i++){
    scanf("%d",&score[i]);
  }
}


void sort_by_score(int score[],int size){

  int i,j,k;

  for(i=1;i<size;i++){
    k=score[i];
    j=i-1;

    while(score[j]>k && j>=0){
      score[j+1]=score[j];
      j--;
    }

    score[j+1]=k;
  }
}


int main(){
  int size;

  scanf("%d",&size);

  int score[size];

  input_score(score,size);

  

  sort_by_score(score,size);


  printf("点数の高い順:\n");
  for(int i = size - 1; i >= 0; i--) {
    printf("%d\n", score[i]);
  }


  return 0;
}

  
  
