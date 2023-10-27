#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "point.h"

double ed(point p1, point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
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
    
    double smallest_ed = ed(points[0], points[1]);

    for (int i = 1; i < n - 1; i++) {
        double current_ed = ed(points[i], points[i+1]);

        if (current_ed < smallest_ed) {
            smallest_ed = current_ed;
        }
    }

    printf("The smallest euclidian distance is %f\n", smallest_ed);

    return 0;
}