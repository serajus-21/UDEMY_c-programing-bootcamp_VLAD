// header.h
// exercises from chatGPT

#define _dividerSTART "\n\n_________________________"
#define _exerciseNumber(n) (n)
#define _dividerEND "_________________________\n"

//// -------------------------------------exercise-1-----------------------------
#define _appName "OEPN_AI "
#define _version 11.5

//// -------------------------------------exercise-2-----------------------------
#define _PI 3.1416
#define _areaCircle(radius) ((_PI) * (radius) * (radius))
#define _cfrnCircle(radius) ((2) * (_PI) * (radius))

//// -------------------------------------exercise-3-----------------------------
#define _areaRectangle ((length) * (width))

//// -------------------------------------exercise-4-----------------------------
#define _div float

//// -------------------------------------exercise-5-----------------------------
#define _square(x) ((x) * (x))
#define _qube(x) ((x) * (x) * (x))

//// -------------------------------------exercise-6-----------------------------
#define _3average(x, y, z) ((x + y + z) / 3)

//// -------------------------------------exercise-7-----------------------------
#define _reset(Zero, zerO) \
    Zero = 0;              \
    zerO = 0

//// -------------------------------------exercise-8-----------------------------
#define _conRESET(resX, resY) \
    do                        \
    {                         \
        resX = 0;             \
        resY = 0;             \
    } while (0)



//// -------------------------------------exercise-9-----------------------------
#define _totalMark 100
#define _passMark 60
#define _passMessage "PASSED\n"
#define _failMessage "FAILED\n"
#define _invalid "INVALID INPUT \n"
