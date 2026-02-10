// main.c
#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    int n1 = 0, n2 = 0;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    int summation = _add(n1,n2);
    int substraction = _sub(n1,n2);
    printf("SUM: %d ||| SUB: %d\n", summation, substraction);
}