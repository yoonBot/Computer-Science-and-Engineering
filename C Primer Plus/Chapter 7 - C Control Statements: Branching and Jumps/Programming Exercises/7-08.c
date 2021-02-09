/* C Priemr Plus Ch.7 - Problem 8
 * @reproduced by yoonBot
 */

#include <stdio.h>
#include <stdbool.h>
#define BASIC 10
#define PAY1 8.75
#define PAY2 9.33
#define PAY3 10.00
#define PAY4 11.20
#define OVERPAY 1.5
#define BREAKPOINT1 300
#define BREAKPOINT2 150
#define TAX 0.15
#define TAX1 0.20
#define TAX2 0.25

int main(){
    
    double hour, gross, pay, tax, net;
    bool valid;
    int input;
    while(1){
        printf("**************************************************************\n");
        printf("Enter the number corresponding to the despired pay rate or action:\n");
        printf("1) $%.2f/hr                         2) $%.2f/hr\n", PAY1, PAY2);
        printf("2) $%.2f/hr                         3) $%.2f/hr\n", PAY3, PAY4);
        printf("5) quit\n");
        printf("**************************************************************\n");

        valid = false;
        while (!valid){
            scanf("%d", &input);
            switch(input){
                case 1:
                    pay = PAY1;
                    valid = true;
                    break;
                case 2:
                    pay = PAY2;
                    valid = true;
                    break;
                case 3:
                    pay = PAY3;
                    valid = true;
                    break;
                case 4:
                    pay = PAY4;
                    valid = true;
                    break;
                case 5:
                    return 0;
                    break;
                default:
                    printf("Invalid command. Please try again: ");
            }
            while(scanf("%d", &input) == 1)
                continue;
        }

        printf("Enter number of hours worked this week: ");
        scanf("%lf", &hour);
        while (getchar() != '\n')
            continue;
        
        if (hour > BASIC)
            gross = pay * BASIC + pay * OVERPAY * (hour - BASIC);
        
        else
            gross = pay * hour;

        if (gross > BREAKPOINT1 + BREAKPOINT2)
            tax = (gross - BREAKPOINT1 - BREAKPOINT2) * TAX1 + BREAKPOINT1 * TAX;
        
        else
            tax = gross * TAX;
        
        net = gross * TAX;
        
        printf("Gross pay: $%.2lf\n", gross);
        printf("Tax: $%.2lf\n", tax);
        printf("Net pay: $%.2lf\n", net);
        printf("\n");
        
        return 0;
    } 
                        
}











