/* C Primer Plus Ch.7 - Problem 9
 * @reproduced by yoonBot
 */

#include <math.h>
#include <stdio.h>

int main(){
    
    int input;
    
    printf("Enter an integer input: ");
    scanf("%d", &input);
    
    while (input % 2 == 0){
        printf("%d ", 2);
        input /= 2;
    }

    printf("Prime divisors of %d are: ", input);
    for (int i = 3; i <= sqrt(input); i += 2){
        while (input % i == 0){
            printf("%d ", i);
            input /= i;
        }
    }

    if (input > 2)
        printf("%d ", input);
    
        
    printf("\n");

    return 0;
}





