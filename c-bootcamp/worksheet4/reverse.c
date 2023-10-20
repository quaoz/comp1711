#include <stdio.h>

void reverse(int *array, int length) {
    for (int i = 0; i < length / 2; i++) {
        int swap = array[length - 1 - i];
        array[length - 1 - i] = array[i];
        array[i] = swap;
    }
}

int main() {
    int length = 10;
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    
    reverse(array, length);

    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}