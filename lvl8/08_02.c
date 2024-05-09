#include <stdio.h>
#include <stdlib.h>

#define NMAX 20

struct Student {
    char first_name[NMAX + 1];
    char last_name[NMAX + 1];
    int grade;
};

int main() {
    int n;
    if(scanf("%d", &n) != 1 || n < 1) {
        printf("n/a");
    } else {
        struct Student* students = malloc(sizeof(struct Student) * n);
        // struct Student* students[1000];
    
        for (int i = 0; i < n; ++i) {
            scanf("%s", students[i].first_name);
            scanf("%s", students[i].last_name);
            scanf("%d", &students[i].grade);
        }

        double sum = 0.0;
        for(int i = 0; i < n; ++i) {
            sum += students[i].grade;
        }
        double mean = sum / n;

        int key = 0;
        for(int i = 0; i < n; ++i) {
            if(mean < students[i].grade) {
                if(key != 0) {
                    printf(" ");
                }
                printf("%s", students[i].last_name);
                ++key;
            }
        }
        if(key == 0) {
            printf("No matches");
        }
    }

    return 0;
}
