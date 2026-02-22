#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, sum;                   // Declare variables

    printf("Enter first number: ");  // Prompt user
    scanf("%d", &a);                 // Read first int

    printf("Enter second number: "); // Prompt user
    scanf("%d", &b);                 // Read second int

    sum = a + b;                     // Calculate total

    printf("Sum: %d\n", sum);        // Display result

    // system("./sub");

    return 0;                        // Exit program
}