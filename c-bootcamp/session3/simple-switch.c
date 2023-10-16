#include <stdio.h>

int main() {
    int a = 2;

    switch (a) {
        case 0: printf("Option 0 has been selectedn\n");
        break;
    
        case 1: printf("Option 1 has been selectedn\n");
        break;

        default: printf("A different option has been seleted\n");
        break;
    }

    return 0;
}