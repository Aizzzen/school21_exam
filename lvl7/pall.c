#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char[]);

int main(){
    char string[100];
    
    fgets(string, sizeof(string), stdin);
    if(isPalindrome(string)) {
        printf("YES");
    } else {
        printf("NO");
    }
    return 0;
}

int isPalindrome(char str[]) {
    int len = strlen(str) - 1;

    for(int i = 0, j = len - 1; i < j; i++, j--) {
        while(!isalnum(str[i])) {
            i++;
        }
        while(!isalnum(str[j])) {
            j--;
        }
        if(tolower(str[i]) != tolower(str[j])) {
            return 0;
        }
    }

    return 1;
}
