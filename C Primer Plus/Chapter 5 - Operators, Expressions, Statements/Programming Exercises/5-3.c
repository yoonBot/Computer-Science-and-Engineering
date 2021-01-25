/* C Primer Plus Ch.5 - Problem 3
 * @reproduced by yoonBot
 */

#include <stdio.h>
#define WEEK 7

int main(void){

    int input;

    printf("Enter the number of days: ");
    scanf("%d", &input);
    
    while (1){
        printf("%d days are %d weeks, %d days.\n", input, input / WEEK, input % WEEK);
        printf("Enter the number of days: ");
        scanf("%d", &input);
        if(input <= 0) break;
    }

    return 0;
}

