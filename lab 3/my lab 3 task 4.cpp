#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    // If-else statement ka use
    if(age >= 18) {
        printf("You are eligible (18 or older).\n");
    } else {
        printf("You are not eligible (under 18).\n");
    }

    return 0;
}