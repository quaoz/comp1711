#include <stdio.h>
#include <stdlib.h>
#include "point.h"

int main() {
    point points[10];

    for (int i = 0; i < 10; i++) {
        points[i].x = rand();
        points[i].y = rand();
    }
    
    for (int i = 0; i < 10; i++) {
        printf("(%.2f, %.2f)\n", points[i].x, points[i].y);
    }
    

    return 0;
}