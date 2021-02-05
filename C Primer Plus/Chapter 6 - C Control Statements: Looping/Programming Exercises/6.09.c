/* C Primer Plus Ch.6 - Problem 9
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int lower, upper;

    printf("Enter lower and upper integer limits: ");
    while(scanf("%d %d", &lower, &upper) && upper > lower){
        
        int sum = 0;
        for (int i = lower; i <= upper; i++)
            sum += i * i;
        printf("The sums of the squares from %d to %d is %d\n", lower * lower, upper * upper, sum);
        printf("Enter lower and upper integer limits: ");
    }
    
    printf("Done\n");

    return 0;
}
