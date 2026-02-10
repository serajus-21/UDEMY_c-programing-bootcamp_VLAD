//func-def.c

#include "prototypes.h"

_dataType summation(_dataType n1, _dataType n2) {
    return n1+n2;
}

_dataType substraction(_dataType n1, _dataType n2) {
    if(n1>n2) {
        return n1 - n2;
    } else {
        return n2 - n1;
    }
}