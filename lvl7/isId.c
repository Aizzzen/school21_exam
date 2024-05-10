#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isId(char[]);

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    if(isId(str)) {
        printf("YES");
    } else {
        printf("NO");
    }

    return 0;
}

int isId(char str[]) {
    if(!(str[0] == '_' || isalpha(str[0]))) {
        return 0;
    }
    for(int i = 1; i < (int)(strlen(str) - 1); i++) {
        if(!(isalnum(str[i]) || str[i] == '_')) {
            return 0;
        }
    }
    return 1;
}