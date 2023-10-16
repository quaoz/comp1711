#include <stdio.h>

int main() {
    int number;

    while (number != -1) {
        printf("Enter a number (-1 to quit): ");
        scanf(" %d", &number);

        if (number >= 0 && number <= 100) { 
            printf("%d is within the range\n", number);
        } else if (number == -1) {
            printf("%d is the termination value\n", number);
        } else {
            printf("%d is not within the range\n", number);
        }
    }

    return 0;
}