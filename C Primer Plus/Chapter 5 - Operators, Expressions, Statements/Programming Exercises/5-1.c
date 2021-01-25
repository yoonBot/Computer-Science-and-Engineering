/* C Primer Plus Ch.4 - Problem 1
 * @reproduced by yoonBot
 */

#include <stdio.h>
#define MINUTES 60

int main(void){

    int input, time = 0;
    printf("Enter the number of minutes: ");
    scanf("%d", &input);
    while(1){
        printf("Converted: %d hours and %d minutes\n", input/MINUTES, input % MINUTES);
        printf("Enter the number of minutes: ");
        scanf("%d", &input);
        if (input <= 0) break;
    }

    return 0;
}

