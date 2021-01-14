/* C Primer Plus Ch.3 - Problem 5 */

#include <stdio.h>

int main(void){

    float age, year = 3.156 * 107;

    printf("Enter your age in years: ");
    scanf("%f", &age);

    age *= year;

    printf("Your age in seconds: %.2f\n", age);

    return 0;
}

