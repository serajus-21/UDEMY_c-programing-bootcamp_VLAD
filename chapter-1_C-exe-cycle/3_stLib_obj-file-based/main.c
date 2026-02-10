// main.c

#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    float base = 0, height = 0;                          // variable
    printf("Enter base & height of triangle: ");         // prompt
    scanf("%f %f", &base, &height);                      // input
    float areaTriangle = area_of_triangle(base, height); // processing
    printf("Area of Triangle: %f\n", areaTriangle);      // output
}