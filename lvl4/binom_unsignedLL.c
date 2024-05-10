#include <stdio.h>


unsigned long long factorial(unsigned long long n);

int main() {
    int k;
    if(scanf("%d", &k) != 1 || k < 0) {
        printf("n/a");
    } else {
        unsigned long long n = (unsigned long long)k;
        for(unsigned long long i = 0ull; i < n + 1ull; i++) {
            printf("%llu",
                factorial(n) / (factorial(i) * factorial(n - i))
            );
            if(i != n) {
                printf(" ");
            }
        }
    }

    return 0;
}


unsigned long long factorial(unsigned long long n) {
    unsigned long long res = 1ull;
    for(unsigned long long i = 1ull; i < n + 1ull; i++) {
        res *= i;
    }
    return res;
}


























