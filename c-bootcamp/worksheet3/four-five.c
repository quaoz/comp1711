#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf(" %d", &number);

    if (number % 4 == 0 && number % 5 == 0) { 
        printf("%d is divisible by 4 and 5\n", number);
    } else {
        printf("%d is not divisible by 4 and 5\n", number);
    }

    return 0;
}