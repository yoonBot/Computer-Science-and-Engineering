/* C Primer Plus Ch.6 - Problem 13
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    double input[8];
    double output[8];
    double tmp = 0;

    printf("Input 8 numbers for the first array: ");
    for (int i = 0; i < 8; i++){
        scanf("%lf", &input[i]);
        tmp += input[i];
        output[i] = tmp;
    }
    
    printf("Output array: ");
    for (int i = 0; i < 8; i++)
        printf("%.2lf ", output[i]);

    printf("\n");

    return 0;
}
        

