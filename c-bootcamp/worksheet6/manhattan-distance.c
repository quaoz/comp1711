#include <stdio.h>
#include <stdlib.h>
#include "point.h"

double md(point p1, point p2) {
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int main() {
    int n;

    printf("Please enter a number: ");
    scanf(" %d", &n);

    point points[n];

    for (int i = 0; i < n; i++) {
        points[i].x = rand();
        points[i].y = rand();
    }
    
    double average_md = 0;

    for (int i = 0; i < n - 1; i++) {
        average_md += md(points[i], points[i+1]);
    }

    average_md /= n;
    printf("The average manhattan distance is %f\n", average_md);

    return 0;
}