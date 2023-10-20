#include <stdio.h>

int str_len(char *input) {
    int length = 0;
    char current = input[0];

    while (current != '\0') {
        current = input[++length];
    }

    return length;
}

int main() {
    printf("%d\n", str_len("string"));

    return 0;
}