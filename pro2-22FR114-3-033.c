#include<stdio.h>

void cng(char *st, char c){
  int i,j;
  char tmp;
  for(i=0;i<26;i++){
    if(st[i] == c){
      tmp=st[0];
      st[0]=c;
      for(j=i;j>0;j--){
	st[j] =st[j-1];
      }
      st[1]=tmp;
      break;
    }
  }
}

int main(){

  char st[27] = "abcdefghijklmnopqrstuvwxyz";
  printf("%s\n",st);
  cng(st,'e');
  printf("%s\n",st);
  return 0;
}

