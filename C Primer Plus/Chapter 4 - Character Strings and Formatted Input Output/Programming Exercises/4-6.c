/* C Primer Plus Ch.4 - Problem 6
 * Reproduced by yoonBot
 */

#include <stdio.h>
#include <float.h>

int main(void){

    double doubleValue = 1.0/3.0;
    float floatValue = 1.0/3.0;

    printf("Four digits: %.4f, %4f\n", doubleValue, floatValue);
    printf("Twelve digits: %.12f, %.12f\n", doubleValue, floatValue);
    printf("Sixteen digits: %.16f, %.16f\n", doubleValue, floatValue);
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);

    return 0;
}

