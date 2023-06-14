#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

struct user {
    int id;
    char name[20];
};

void set_user(struct user* users, int i, int id, char* name) {
    users[i].id = id;
    strcpy(users[i].name, name);
}
int main() {
    struct user users[MAX_USERS];
    int num_users = 0;
    int id;
    char name[20];

    
    while (num_users < MAX_USERS) {
        printf("ユーザ番号と名前を入力してください（終了するには-1を入力）。\n");
        scanf("%d", &id);
        if (id == -1) {
            break;
        }
        scanf("%s", name);
        set_user(users, num_users, id, name);
        num_users++;
    }

    printf("検索するユーザ番号を入力してください。\n");
    scanf("%d", &id);
    for (int i = 0; i < num_users; i++) {
        if (users[i].id == id) {
            printf("%d\n", users[i].id);
            printf("%s\n", users[i].name);
            return 0;
        }
    }
    printf("見つかりません\n");
    return 0;
}
