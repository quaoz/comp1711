#include <stdio.h>

int main() {
    char filename[] = "data.dat";
    FILE *file = open_file(filename, "r");
    
    int buffer_size = 100;
    char line_buffer[buffer_size];
    
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%s", line_buffer);
    }
    
    fclose(file);
    return 0;
}