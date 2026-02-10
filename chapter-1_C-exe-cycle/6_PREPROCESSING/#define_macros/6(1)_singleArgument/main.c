// main.c
#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    int userInput = 0;                                                                                                        // userData
    printf("The number you'll input, will be incremented by 1, & then squared, with the help of Allah\nEnter your Number: "); // prompt
    scanf("%d", &userInput);                                                                                                  // input
    int increementedResult = _incBy(userInput);
    int squaredResult = _sqrt(increementedResult);
    printf("Result is: %d\n", squaredResult); // output
    return 0;
}