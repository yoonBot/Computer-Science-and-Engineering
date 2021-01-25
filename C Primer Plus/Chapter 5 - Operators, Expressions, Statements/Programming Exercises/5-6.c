/* C Primer Plus Ch.5 - Problem 6
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(void){

    int count, sum, range;

    count = 0;
    sum = 0;
    
    printf("Enter range: ");
    scanf("%d", &range);

    while(count++ < range)
        sum += count * count;

    printf("sum = %d\n", sum);
}

