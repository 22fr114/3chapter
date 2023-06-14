#include<stdio.h>

int mystrcmp(const char *s1, const char *s2){
  while(*s1!='\0' && *s2!='\0'){
    if(*s1>*s2){
      return 1;
    }else if(*s1==*s2){
      return 0;
    }else{
      return -1;
    }
    s1++;
    s2++;
  }
  if(*s1 == '\0' && *s2=='\0'){
    return 0;
  }else if(*s1 == '\0'){
    return -1;
  }else{
    return 1;
  }
}

int main(){
  const char *str1 = "konnnitiha";
  const char *str2 = "ohayuogozaimasu";

  int ans = mystrcmp(str1,str2);

  printf("%d\n",ans);
  return 0;
}

