#include <stdio.h>

int main() {
    int number;

    printf("Enter a temptrature: ");
    scanf(" %d", &number);

    if (number >= -10 && number <= 40) { 
        printf("%d is within the range\n", number);
    } else {
        printf("%d is not within the range\n", number);
    }

    return 0;
}