#include <stdio.h>

int main() {
    int number;

    // User se integer input lene ke liye
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Logical AND operator ka use
    if(number > 0 && number < 100) {
        printf("The number is greater than 0 and less than 100.\n");
    } else {
        printf("The number does not meet both conditions.\n");
    }

    return 0;
}