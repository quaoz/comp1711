#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char* address = malloc(200 * sizeof(char));
    int* data = malloc(70 * sizeof(int));

    int size;
    printf("Enter the size: ");
	scanf("%d", &size);

    double* samples = malloc(size * sizeof(double));

    // -Og does something to stop it being silly
    if (!samples) {
        printf("no");
    }
}