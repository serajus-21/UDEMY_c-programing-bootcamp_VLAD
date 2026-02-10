//exercise.c
//exercises from chatGPT

#include <stdio.h>
#include "header.h"

int main(void)
{
    
    printf(_dividerSTART); printf("%d", _exerciseNumber(1)); printf(_dividerEND);
    // -------------------------------------exercise-1-----------------------------
    printf(_appName);
    printf("%.1f", _version);
    printf(" Started Successfully\n");



    printf(_dividerSTART); printf("%d", _exerciseNumber(2)); printf(_dividerEND);
    // -------------------------------------exercise-2-----------------------------
    float radius = 0;
    printf("Enter Radius: "); scanf("%f", &radius);
    float area_of_circle = _areaCircle(radius);
    float circumference_of_circle = _cfrnCircle(radius);
    printf("AREA = %f ||| CIRCUMFERENCE = %f\n", area_of_circle, circumference_of_circle);



    printf(_dividerSTART); printf("%d", _exerciseNumber(3)); printf(_dividerEND);
    // -------------------------------------exercise-3-----------------------------
    int length = 0, width = 0;
    printf("Enter length & width of rectangle: ");
    scanf("%d %d", &length, &width);
    int area_of_rec = _areaRectangle;
    printf("Area of Rectangle: %d\n", area_of_rec);



    printf(_dividerSTART); printf("%d", _exerciseNumber(4)); printf(_dividerEND);
    // -------------------------------------exercise-4-----------------------------
    _div number1=0, number2=0;
    printf("Enter two values (n/n): ");
    scanf("%f %f", &number1, &number2);
    _div result = number1/number2;
    printf("RESULT: %.2f\n", result);



    printf(_dividerSTART); printf("%d", _exerciseNumber(5)); printf(_dividerEND);
    // -------------------------------------exercise-5-----------------------------
    int userInput = 0;
    printf("Enter number for square & qube: ");
    scanf("%d", &userInput);
    int square_of_input = _square(userInput);
    int qube_of_input = _qube(userInput);
    printf("SQR = %d | QB = %d\n", square_of_input, qube_of_input);



    printf(_dividerSTART); printf("%d", _exerciseNumber(6)); printf(_dividerEND);
    // -------------------------------------exercise-6-----------------------------
    int avNum1 = 0, avNum2 = 0, avNum3 = 0;
    printf("Enter three values of average: ");
    scanf("%d %d %d", &avNum1, &avNum2, &avNum3);
    float average = _3average(avNum1,avNum2,avNum3);
    printf("Average as floating: %.2f\n", average);



    printf(_dividerSTART); printf("%d", _exerciseNumber(7)); printf(_dividerEND);
    // -------------------------------------exercise-7-----------------------------
    int success = 0, failure = 0;
    for(success; success<=5; success++) {
        printf("%d ", success);
    } printf("\n");
    for(failure; failure<=10; failure++) {
        printf("%d ", failure);
    } printf("\n");
    printf("Value before RESET: S:%d | F:%d\n", success, failure);
    _reset(success, failure);
    printf("Value after RESET: S:%d | F:%d\n", success, failure);



    printf(_dividerSTART); printf("%d", _exerciseNumber(8)); printf(_dividerEND);
    // -------------------------------------exercise-8-----------------------------
    int conX=34, conY=33;
    int forge = 1;

    if(forge) {
        _conRESET(conX,conY);
        printf("RESET: %d %d\n", conX, conY);
    } else {
        printf("RESET: %d %d\n", conX, conY);
    }



    printf(_dividerSTART); printf("%d", _exerciseNumber(9)); printf(_dividerEND);
    // -------------------------------------exercise-9-----------------------------
    int userMark = 0;
    printf("Enter mark: ");
    scanf("%d", &userMark);
    if(userMark>100 || userMark<0) {
        printf(_invalid);
    } else if(userMark >= _passMark) {
        printf(_passMessage);
    } else {
        printf(_failMessage);
    }
}