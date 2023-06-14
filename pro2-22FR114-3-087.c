#include<stdio.h>

int numc(char st[256],char c){
  int i=0,S=0;


  for(i=0;i<256;i++){
    if(st[i]==c){
      S++;
    }
  }


  return S;
}


int main(){
  char st1[256]="konnnitiha";
  char c='n';
  int ans=0;

  ans=numc(st1,c);


  printf("%d\n",ans);

  return 0;
}


  
      
