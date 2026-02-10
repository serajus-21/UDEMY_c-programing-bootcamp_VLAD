// main.c
// c-execution-cycle

#include <stdio.h>
#include "function-prototypes.h"

int main(void)
{
    int n1 = 0, n2 = 0;                    // variable definitions
    printf("Enter two numbers: ");         // user prompt
    scanf("%d %d", &n1, &n2);              // user input
    int sum = summation(n1, n2);           // processing sum
    int sub = substraction(n1, n2);        // processing sub
    printf("%d + %d = %d\n", n1, n2, sum); // output sum
    printf("%d - %d = %d\n", n1, n2, sub); // output sub
}

