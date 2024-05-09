#include <stdio.h>

int main() {
    int num;
    if (scanf("%d", &num) != 1 || num == -1) {
        printf("n/a");
        return 0;
    }

    int sequence[1000];
    int length = 0;

    while (num != -1) {
        sequence[length] = num;
        length++;
        if (scanf("%d", &num) != 1) {
            printf("n/a");
            return 0;
        }
    }

    for (int i = length - 1; i >= 0; i--) {
        printf("%d", sequence[i]);
        if (i != 0) {
            printf(" ");
        }
    }

    return 0;
}