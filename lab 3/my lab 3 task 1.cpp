#include <stdio.h>

int main() {
    int num1, num2;

    // User se do numbers input lene ke liye
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Comparison operators ka use
    if(num1 == num2) {
        printf("Both numbers are equal.\n");
    } else if(num1 > num2) {
        printf("First number is greater than second number.\n");
    } else {
        printf("First number is less than second number.\n");
    }

    return 0;
}