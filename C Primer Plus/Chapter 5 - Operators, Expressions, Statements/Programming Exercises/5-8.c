/* C Primer Plus ch.5 - Problem 8
 * @reproduced by yoonBot
 */

#include <stdio.h>

void Temperature(double* fahrenheit);

int main(void){

    double input;
    printf("Please enter temperature in fahrenheit: ");
    
    while(scanf("%lf", &input)){
        Temperature(&input);
        printf("Please enter temperature in fahrenheit: ");
    }
    return 0;
}

void Temperature(double* fahrenheit){

    const double celciusFreezing = 32.0;
    const double kelvinFreezing = 273.16;

    double toCelcius = (*fahrenheit - celciusFreezing) * (5/9);
    double toKelvin = toCelcius + kelvinFreezing;

    printf("%.2f Fahrenheit = %.2f Celcius and %.2f Kelvin\n", *fahrenheit, toCelcius, toKelvin);
}


