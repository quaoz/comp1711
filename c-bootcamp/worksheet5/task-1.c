#include <stdio.h>

int main() {
    int num;

    printf("Please enter a number: ");
    scanf(" %d", &num);

    char filename [] = "squares.dat";
    FILE *file = fopen(filename, "w");
    
    if (file == NULL) {
        perror("");
        return 1;
    }
    
    for (int i = 1; i <= num; i++) {
        fprintf(file, "%d\n", i * i);
    }
    

    fclose(file);  
    return 0;
}