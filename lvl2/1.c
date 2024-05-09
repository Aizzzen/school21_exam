#include <stdio.h>

int main() {
    int n;
    if(scanf("%d", &n) != 1) {
        printf("n/a");
        return 0;
    }

    int res = 1;
    int counter = 0;
    while(n) {
        if((n % 10) > 0) {
            if((n % 10) % 2 != 0) {
                res *= (n % 10);
            }
            n /= 10;
            counter++;
        } else {
            counter++;
            break;
        }
    }

    if(counter == 2) {
        printf("%d", 0);
    } else if(counter == 1) {
        printf("%d", n * (-1));
    } else {
        printf("%d", res);
    }
    return 0;
}