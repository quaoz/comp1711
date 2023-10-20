#include <stdio.h>

float sphereVolume(float radius) {
    float area = 3.141 * 4 / 3 * radius * radius * radius;
    return area;
}

int main() {
    float radius;

    printf("Please enter the radius: ");
    scanf(" %f", &radius);

    printf("The volume of a sphere with radius %f is %f\n", radius, sphereVolume(radius));
    
    return 0;
}