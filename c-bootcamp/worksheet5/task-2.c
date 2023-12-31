#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "squares.dat";
    FILE *file = fopen(filename, "r");
    
    if (file == NULL) {
        perror("");
        return 1;
    }
    
    float sum = 0;
    float count = 0;

    int buffer_size = 100;
    char line_buffer[buffer_size];
    
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        sum += atoi(line_buffer);
        count++;
    }

    float average = sum / count;
    
    printf("The sum is: %.0f\n", sum);
    printf("The count is: %.0f\n", count);
    printf("The average is: %f\n", average);

    fclose(file);  
    return 0;
}