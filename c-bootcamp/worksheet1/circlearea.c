#include <stdio.h>

int main() {
    float radius;
    float area;

    printf("Please enter the radius: ");
    scanf(" %f", &radius);

    area = 3.141 * radius * radius;

    printf("The area of a circle with radius %f is %f\n", radius, area);
    
    return 0;
}