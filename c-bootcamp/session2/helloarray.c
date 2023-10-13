#include <stdio.h>

int main() {
    char hello[6] = "Hello";
    
    for (int i = 0; i < 6; i++) { 
        printf("%c\n", hello[i]);
    }

    return 0;    
}