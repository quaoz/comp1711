#include <stdio.h>

float circleArea(float radius) {
    float area = 3.141 * radius * radius;
    return area;
}

int main() {
    float radius;

    printf("Please enter the radius: ");
    scanf(" %f", &radius);

    printf("The area of a circle with radius %f is %f\n", radius, circleArea(radius));
    
    return 0;
}