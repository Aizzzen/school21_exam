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

    for (int i = 0; i < length; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (sequence[j] == sequence[i]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            printf("%d", sequence[i]);
            if(i < length - 1) {
                printf(" ");
            }
        }
    }

    return 0;
}