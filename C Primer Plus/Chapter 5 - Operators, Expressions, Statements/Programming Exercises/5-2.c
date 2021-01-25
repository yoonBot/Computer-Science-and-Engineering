/* C Primer Plus Ch.5 - Problem 2
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(void){

    int input;
    
    printf("Enter an integer: ");
    scanf("%d", &input);

    for(int i = 0; i <= 10; i++)
        printf("%d ", input++);
    
    printf("\n");

    return 0;
}
