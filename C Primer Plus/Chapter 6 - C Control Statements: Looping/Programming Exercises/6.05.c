/* C Primer Plus - Ch.6 - Problem 5
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int lower, upper;
    
    printf("Enter a lower limit: ");
    scanf("%d", &lower);
    printf("Enter an upper limit: ");
    scanf("%d", &upper);
    
    printf("%10s %10s %10s\n", "Number", "Squared", "Cubed");
    for(int i = lower; i <= upper; i++)
        printf("%10d %10d %10d\n", i, i * i, (i * i) * i);

    return 0;
}

