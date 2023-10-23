#include <stdio.h>
#include "utils.h"

int main() {
    char filename[] = "data.dat";
    FILE *file = open_file(filename, "w");
    
    fclose(file);
    return 0;
}