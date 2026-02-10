// main.c
#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    int x = 20, y = 9;
    printf("x=%d ||| y=%d\n", x, y);
    RESET_VALUES(x,y);
    printf("AFTER EXPANSION OF MULTI-LINE MACRO\n");
    printf("RESET => x=%d ||| y=%d\n", x, y);
}