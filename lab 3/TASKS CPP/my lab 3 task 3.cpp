#include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if number is positive
    if(number > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}