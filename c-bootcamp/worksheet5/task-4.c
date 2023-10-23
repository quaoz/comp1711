#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char filename[] = "numbers.dat";
    FILE *file = fopen(filename, "a+");
    
    if (file == NULL) {
        perror("");
        return 1;
    }
    
    float sum = 0;
    float count = 0;

    int buffer_size = 100;
    char line_buffer[buffer_size];
    
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        sum += atof(line_buffer);
        count++;
    }

    float average = sum / count;
    
    printf("The sum is: %f\n", sum);
    printf("The count is: %f\n", count);
    printf("The average is: %f\n", average);

    if (strstr(line_buffer, "\n") != NULL) {
        fprintf(file, "%f", average);
    } else {
        fprintf(file, "\n%f", average);
    }

    fclose(file);  
    return 0;
}