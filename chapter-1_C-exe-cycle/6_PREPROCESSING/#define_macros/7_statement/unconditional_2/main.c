#include <stdio.h>
#include "header.h"

int main(void) {
    printf("_INIT__\n");
    int a=9999;
    int b=9999;
    printf("a=%d ||| b=%d\n",a,b);


    printf(messageOFF);
    off(a,b);
    printf("a=%d ||| b=%d\n",a,b);


    printf(messageON);
    on(a,b);
    printf("a=%d ||| b=%d\n",a,b);
}