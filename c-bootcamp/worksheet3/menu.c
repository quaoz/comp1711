#include <stdio.h>

int main() {
    int number;

    printf("Select an option from 1-5: ");
    scanf(" %d", &number);

    switch (number) {    
        case 1: printf("Option 1 has been selectedn\n");
        break;

        case 2: printf("Option 2 has been selectedn\n");
        break;

        case 3: printf("Option 3 has been selectedn\n");
        break;

        case 4: printf("Option 4 has been selectedn\n");
        break;

        case 5: printf("Option 5 has been selectedn\n");
        break;

        default: printf("An invalid option has been seleted\n");
        break;
    }

    return 0;
}