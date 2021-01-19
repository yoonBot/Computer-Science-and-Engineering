/* C Primer Plus Ch.4 - Problem 3
 * Reproduced by: yoonBot
 */

#include <stdio.h>

int main(void){

    float input = 0;
    printf("Enter input: ");
    scanf("%f", &input);
    printf("The input is %.1f or %.1e.\n", input, input);
    printf("The input is %.3f or %.3E\n", input, input);

    return 0;
}

