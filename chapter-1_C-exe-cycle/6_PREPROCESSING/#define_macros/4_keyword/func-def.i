# 0 "func-def.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "func-def.c"


# 1 "prototypes.h" 1




int summation(int n1, int n2);
int substraction(int n1, int n2);
# 4 "func-def.c" 2

int summation(int n1, int n2) {
    return n1+n2;
}

int substraction(int n1, int n2) {
    if(n1>n2) {
        return n1 - n2;
    } else {
        return n2 - n1;
    }
}
