#include<stdio.h>
#include "prototype.h"

int main(void) {
    printf(_programName);
    int x=9, y=1;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("x+y = %d\n", x+y);
    printf(_terminationMessage);
    
    return _success;
}