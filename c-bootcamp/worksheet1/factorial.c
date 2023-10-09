#include <stdio.h>

int main() {
    int a;
    int factorial;

    printf("Please enter a number: ");
    scanf(" %d", &a);

    factorial = a;

    for (int i = a - 1; i > 1; i--) {
        factorial *= i;
    }

    printf("%d factorial\n", factorial);
    
    return 0;
}