// main.c
#include <stdio.h>
#include "prototypes.h"

int main(void)
{
    int init_bufferSize = _bufferSizeInit; // should be expanded during preprocessing - an expression
    int term_bufferSize = 0;
    printf("Enter termination buffer size: ");                            // prompt
    scanf("%d", &term_bufferSize);                                        // input
    int _totalBufferSize = totalBuffer(init_bufferSize, term_bufferSize); // processing
    printf("Total Buffer Size is : %d", _totalBufferSize);
}