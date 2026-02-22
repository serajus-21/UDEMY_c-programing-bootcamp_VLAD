#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, sub;                   // Declare variables

    printf("Enter first number: ");  // Prompt user
    scanf("%d", &a);                 // Read first int

    printf("Enter second number: "); // Prompt user
    scanf("%d", &b);                 // Read second int

    sub = a - b;                     // Calculate sub

    printf("Sub: %d\n", sub);        // Display result

    // system("./mlt");

    return 0;                        // Exit program
}