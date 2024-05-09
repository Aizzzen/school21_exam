#include <stdio.h>

int main() {
    int array_of_numbers[1000];
    int index = 0;
    int counter = 0;
    int res = 1;
    char endline = ' ';

    while(endline != '\n') {
        if(scanf("%d%c", &array_of_numbers[index], &endline) &&
            ((endline == ' ') || (endline == '\n'))
        ) {
            if(array_of_numbers[index] % 2 != 0) {
                res *= array_of_numbers[index];
            }
            counter++;
            index++;
        } else {
            printf("n/a");
            return 0;
        }
    }

    if(counter == 2) {
        printf("%d", 0);
    } else if (counter == 1) {
        if(array_of_numbers[0] < 0) {
            printf("%d", array_of_numbers[0] * (-1));
        } else {
            printf("%d", array_of_numbers[0]);
        }
    } else {
        printf("%d", res);
    }
    return 0;
}