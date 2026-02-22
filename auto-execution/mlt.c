#include <stdio.h>

int main() {
    int a, b, mlt;                   // Declare variables

    printf("Enter first number: ");  // Prompt user
    scanf("%d", &a);                 // Read first int

    printf("Enter second number: "); // Prompt user
    scanf("%d", &b);                 // Read second int

    mlt = a * b;                     // Calculate sub

    printf("mlt: %d\n", mlt);        // Display result

    return 0;                        // Exit program
}