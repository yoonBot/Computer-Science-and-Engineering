/* C Primer Plus Ch.3 - Problem 7 (to Centimeters)  */

#include <stdio.h>
#define INCHES 2.54

int main(void){

    int height;

    printf("Enter your height in inches: ");
    scanf("%d", &height);
    
    height = height * INCHES;

    printf("Your height in Centimeters is: %d\n", height);

    return 0;
}


