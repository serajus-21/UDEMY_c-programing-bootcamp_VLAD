//main.c
#include<stdio.h>
#include "header.h"

int main(void) {
    int x=9, y=89;
    printf("sum = %d\n", x+y);

    printf(_resetMessage);
    _resetData(x,y);
    printf("sum = %d\n", x+y);
}