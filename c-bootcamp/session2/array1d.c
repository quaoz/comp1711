#include <stdio.h>

int main() {
    int a[10];
    
    for (int i = 0; i < 10; i++) { 
        a[i] = i * 10 + i;
    }
    
    printf("The first and second elements are %d and %d.\n", a[0], a[1]);
    printf("Or, via pointers, %d and %d.\n", *a, *(a+1));
    
    return 0;    
}