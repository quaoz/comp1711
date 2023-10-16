#include <stdio.h>

int main() {
    int array[6] = {1, 2, 3, 4, 4, 5};
    
    for (int i = 0; i < 6; i++) { 
        for (int j = i + 1; j < 6; j++) { 
           if (array[i] == array[j]) {
                printf("%d is a duplicate.\n", array[i]);
           }
        }
    }
    
    return 0;    
}