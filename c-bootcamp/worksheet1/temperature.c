#include <stdio.h>

int main() {
    float temp;
    float celcius;

    printf("Please enter a temperature in farenheit: ");
    scanf(" %f", &temp);

    celcius = (temp - 32) * (5/ 9);

    printf("%f farenheit is %f celcius\n", temp, celcius);
    
    return 0;
}