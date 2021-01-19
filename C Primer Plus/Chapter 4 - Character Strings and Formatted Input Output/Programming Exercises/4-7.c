/* C Primer Plus Ch.4 - Problem 7
 * Reproduced by yoonBot
 */

#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILES_TO_KM 1.609

int main(void){

    float mileInput;
    float gallonInput;

    printf("Enter the number of miles: ");
    scanf("%f", &mileInput);
    printf("Enter the number of gallons: ");
    scanf("%f", &gallonInput);

    float mpg = mileInput/gallonInput;

    printf("Miles per gallon: %.1f\n", mpg);

    float mpl = mpg / GALLON_TO_LITER;
    float kpl = mpl / MILES_TO_KM;
    float lpk = 100 / kpl;

    printf("Liters per 100 kilometers: %.1f\n", lpk);

    return 0;
}

    

