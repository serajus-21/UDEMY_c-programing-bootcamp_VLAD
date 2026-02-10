#include<stdio.h>
#include "header.h"

int main(void) {
    int a=9999, b=9999;
    printf(_initMessage);
    printf("a=%d | b=%d\n",a,b);

    printf(_line);

    printf(_message);
    _offOn(a,b);
    printf("a=%d | b=%d\n",a,b);

    printf(_line);

    printf(_messageSwap);
    _onOff(a,b);
    printf("a=%d | b=%d\n",a,b);
}