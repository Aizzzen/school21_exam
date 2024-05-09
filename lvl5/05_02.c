//развернуть бесконечную последовательность чисел
#include <stdio.h>

int main() {
    int array_of_numbers[1000];
    int index = 0;

    char endline = ' ';

    while(endline != '\n') {
        if(scanf("%d%c", &array_of_numbers[index], &endline) &&
            ((endline == ' ') || (endline == '\n'))
        ) {
            index++;
        } else {
            printf("n/a");
            return 0;
        }
    }

    for(int i = index - 1; i >= 0; i--) {
        printf("%d", array_of_numbers[i]);
        if(i != 0) {
            printf(" ");
        }
    }

    return 0;
}