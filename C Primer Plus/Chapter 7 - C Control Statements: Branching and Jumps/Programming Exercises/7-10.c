/* C Primer Plus Ch.7 - Problem 10
 * @reproduced by yoonBot
 */

#include <stdio.h>
#define BASE 0.15
#define EXCESS 0.28
#define SINGLE 17850
#define HEAD 23900
#define JOINT 29750
#define SEPARATE 14875

int main(){
    
    char option;
    double income, breakpoint, tax;

    while(1){
        printf("Enter one of the options below:\n");
        printf("a) Single\n");
        printf("b) Head of Household\n");
        printf("c) Married, Joint\n");
        printf("d) Married, Separate\n");
        printf("q) Quit\n");

        option = getchar();
        switch(option){
            case 'a': 
                breakpoint = SINGLE;
                break;
            case 'b':
                breakpoint = HEAD;
                break;
            case 'c': 
                breakpoint = JOINT;
                break;
            case 'd':
                breakpoint = SEPARATE;
                break;
            case 'e':
                return 0;
            default:
                printf("Invalid option. Please try again.\n\n");
                continue;
        }

        printf("Enter income input: ");
        scanf("%lf", &income);
        while (getchar() != '\n')
            continue;

        if (income < breakpoint)
            tax = BASE * income;

        else
            tax = BASE * breakpoint + EXCESS * (income - breakpoint);

        printf("Your tax is $%.2f\n\n", tax);
    
    }

    return 0;

}

