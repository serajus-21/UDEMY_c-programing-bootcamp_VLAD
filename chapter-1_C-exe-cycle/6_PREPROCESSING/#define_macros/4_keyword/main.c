// main.c

#include <stdio.h>
#include "prototypes.h"

_dataType main(void)
{
    _dataType userInput1 = 0, userInput2 = 0;             // var
    printf("Enter two numbers: ");                        // prompt
    scanf("%d %d", &userInput1, &userInput2);             // input
    _dataType sum = summation(userInput1, userInput2);    // sum
    _dataType sub = substraction(userInput1, userInput2); // sub
    printf("sum = %d ||| sub = %d \n", sum, sub);         // output
}