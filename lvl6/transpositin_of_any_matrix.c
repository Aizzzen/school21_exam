#include <stdio.h>

int main() {
    int x, y;
    if(scanf("%d%d", &x, &y) != 2 && x < 0 && y < 0) {
        printf("n/a");
    } else {
        int matrix[y][x];
        int bad = 0;

        for(int i = 0; i < x; i++) {
            for(int j = 0; j < y; j++) {
                if(scanf("%d", &matrix[j][i]) != 1) {
                    bad = 1;
                }
                if(bad) {
                    break;
                }
            }
            if(bad) {
                break;
            }
        }

        if(!bad) {
            for(int i = 0; i < y; i++) {
                for(int j = 0; j < x; j++) {
                    printf("%d", matrix[i][j]);
                    if(j < x - 1) {
                        printf(" ");
                    }
                }
                if(i < y - 1) {
                    printf("\n");
                }
            }
        } else {
            printf("n/a");
        }
    }
    return 0;
}