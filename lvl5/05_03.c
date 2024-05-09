#include <stdio.h>
#include <stdlib.h>

int main() {
    int kArrayLength = 2, *pointer_to_array, tmp, counter_for_output = 0;
    pointer_to_array = (int *)malloc(kArrayLength * sizeof(int));

    if(pointer_to_array == NULL) {
        printf("n/a");
        return 0;
    } else {
        for (int i = 0; i < kArrayLength; i++) {
            if(!scanf("%d", &tmp)) {
                printf("n/a");
                return 0;
            } else if (tmp == -1) {
                kArrayLength = i;
            } else {
                pointer_to_array[i] = tmp;
                kArrayLength += 1;
                pointer_to_array = (int *)realloc(pointer_to_array, kArrayLength * sizeof(int));
            }
        }
        counter_for_output = kArrayLength;

        for(int i = 0; i < kArrayLength; i++) {
            printf("%d", pointer_to_array[i] * counter_for_output);
            counter_for_output--;
            if(i < kArrayLength - 1) {
                printf(" ");
            }
        }
    }
    free(pointer_to_array);
    
    return 0;
}