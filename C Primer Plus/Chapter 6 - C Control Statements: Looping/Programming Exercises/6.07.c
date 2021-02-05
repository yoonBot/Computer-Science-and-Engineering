/* C Primer Plus Ch.6 - Problem 7
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    float input1, input2;
    
    printf("Enter two floating-point numbers: ");

    while(scanf("%f %f", &input1, &input2)){
        //printf("Enter a second floating-point number: ");
        //scanf("%f", &input2);
        float result = (input1 - input2) / (input1 * input2);
        printf("(a - b)/(a * b) = %.2f\n", result);
        printf("Enter two floating-point numbers: ");
    }

    return 0;
}
