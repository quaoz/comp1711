#include <stdio.h>

int main() {
    int number;

    printf("Enter the grade: ");
    scanf(" %d", &number);

    if (number < 50) { 
        printf("%d is a fail\n", number);
    } else if (number >= 70) { 
        printf("%d is a distinction\n", number);
    } else {
        printf("%d is a pass\n", number);
    }

    return 0;
}