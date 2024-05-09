#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    if(!scanf("%d", &n)){
        printf("n/a");
        return 0;
    }

    int *vector1 = malloc(sizeof(int) * n);
    int *vector2 = malloc(sizeof(int) * n);
    int res = 0;    

    for (int i = 0; i < n; i++) {
        if(!scanf("%d", &vector1[i])) {
            printf("n/a");
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        if(!scanf("%d", &vector2[i])) {
            printf("n/a");
            return 0;
        }
    }

    for (int i = 0; i < n; i++) {
        res += vector1[i] * vector2[i];
    }

    printf("%d", res);
    free(vector1);
    free(vector2);

    return 0;
}
