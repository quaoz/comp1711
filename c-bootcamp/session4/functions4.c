#include <stdio.h>
#include <stdbool.h> 

float fahr_to_celsius (float f_temp) {
    float c_temp;
    c_temp = (f_temp - 32)/1.8;
    return c_temp;
}

float fahr_to_kelvin (float f_temp) {
    float k_temp;
    k_temp = fahr_to_celsius(f_temp) + 273.15;
    return k_temp;
}

float fahr_to_newton (float f_temp) {
    float c_temp;
    c_temp = (f_temp - 32)/5.45454555;
    return c_temp;
}

int main () {
    float fahrenheit;
    char option;
    bool loop = true;

    while (loop) {
        printf("Enter a temperature to convert in Fahrenheit:\n");
        scanf("%f", &fahrenheit);

        printf("\n");
        printf("Select A to convert to Celsius\n");
        printf("Select B to convert to Kelvin\n");
        printf("Select C to convert to Newtons\n");
        printf("Select Q to quit\n\n");

        scanf(" %c", &option);

        switch (option) {
            case 'A' | 'a': 
                printf("\nConverted to degrees Celsius: %f\n\n", fahr_to_celsius(fahrenheit));
                break;

            case 'B' | 'b':
                printf("\nConverted to Kelvin: %f\n\n", fahr_to_kelvin(fahrenheit));
                break;

            case 'C' | 'c':
                printf("\nConverted to Newtons: %f\n\n", fahr_to_newton(fahrenheit));
                break;

            case 'Q' | 'q': 
                loop = false;
                break;

            default:  
                break;
        }   
    }
    return 0;
}
