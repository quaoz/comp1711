#include <stdio.h>

int main() {
    float width;
    float height;
    float area;

    printf("Please enter the width of the rectangle: ");
    scanf(" %f", &width);

    printf("Please enter the height of the rectangle: ");
    scanf(" %f", &height);

    area = width * height;
    printf("The area is: %.2f\n", area);
    
    return 0;
}