#include <stdio.h>

int main() {
    float a;
    float b;
    float sum;

    printf("Please enter the first number: ");
    scanf(" %f", &a);

    printf("Please enter the second number: ");
    scanf(" %f", &b);

    sum = a + b;

    printf("The sum of adding %f and %f is %f\n", a, b, sum);
    
    return 0;
}