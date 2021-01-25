/* C Primer Plus ch.5 - Problem 7
 * @reproduced by yoonBot
 */

#include <stdio.h>

float cubed(float input);

int main(void){

    float input, result;
    
    printf("Enter a float number: ");
    scanf("%f", &input);
    result = cubed(input);
    printf("%.1f cubed is: %.1f\n", input, result);

    return 0;
}

float cubed(float input){
    input = input * input * input;
}


    
