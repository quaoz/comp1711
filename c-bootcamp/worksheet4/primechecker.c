#include <stdio.h>

int is_prime(int number) {
    for (int i = 2; i < number / 2; i++) {
        if (number % i == 0) {
            return 0;
        }
        
    }
    
    return 1;
}

int main() {
    printf("%d\n", is_prime(29));

    return 0;
}