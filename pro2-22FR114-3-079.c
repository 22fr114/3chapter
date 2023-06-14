#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int strcnt(const char *s1, const char *s2){
    int count = 0;
    char *s1_copy = strdup(s1);  // s1のコピーを作成

    const char *word = strtok(s1_copy, " ");

    while(word != NULL){
        if(strcmp(word, s2) == 0){
            count++;
        }
        word = strtok(NULL, " ");
    }

    free(s1_copy);  // コピーしたメモリを解放

    return count;
}

int main(){
    const char *s1 = "I am GOD";
    const char *s2 = "am";

    int count = strcnt(s1, s2);
    printf("%d\n", count);
    return 0;
}
