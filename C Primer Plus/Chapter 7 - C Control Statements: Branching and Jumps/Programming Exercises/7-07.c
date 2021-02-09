/* C Primer Plus Ch.7 - Problem 7
 * @reproduced by yoonBot
 */

#include <stdio.h>
#define RATE 10
#define BASIC 10
#define OVERTIME 1.5
#define BREAKPOINT1 300
#define BREAKPOINT2 150
#define TAX 0.15
#define TAX1 0.20
#define TAX2 0.25

int main(){

    double hours, gross, net, tax;

    printf("Enter number of hours worked in a week: ");
    scanf("%lf", &hours);

    if (hours > BASIC)
        gross = RATE * BASIC + RATE * OVERTIME * (hours - BASIC);
    
    else
        gross = RATE * hours;

    if (gross = BREAKPOINT1 + BREAKPOINT2)
        tax = (gross - BREAKPOINT1 - BREAKPOINT2) * TAX2 + (BREAKPOINT1 - BREAKPOINT2) * TAX1 + BREAKPOINT1 * RATE;

    else if (gross > BREAKPOINT1)
        tax = (gross - BREAKPOINT1) * TAX1 + BREAKPOINT1 * TAX;

    else
        tax = gross * TAX;

    net = gross - tax;

    printf("Gross: %.2lf\n", gross);
    printf("Tax: %.2lf\n", tax);
    printf("Net pay: %.2lf\n", net);

    return 0;
}

