#include <stdio.h>

float calc(float a, float b, char operator) {
    switch (operator) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default: return 0;
    }
}

int main() {
    float a;
    float b;
    char operator;

    printf("Please enter a number: ");
    scanf(" %f", &a);

    printf("Please enter another number: ");
    scanf(" %f", &b);

    printf("Please enter an operator: ");
    scanf(" %c", &operator);

    printf("%f\n", calc(a, b, operator));
    
    return 0;
}