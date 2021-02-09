/* C Primer Plus Ch.7 - Problem 5
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int input, even_cnt = 0, odd_cnt = 0;
    float even_sum = 0, odd_sum = 0;
    
    printf("Enter an input (Enter 0 to quit): ");
    while((scanf("%d", &input) == 1) && (input != 0)){
        switch (input % 2){
            case 0:
                even_cnt++;
                even_sum += input;
                break;
            default :
                odd_cnt++;
                odd_sum += input;
        }
        printf("Enter another input (Enter 0 to quit): ");
    }

    printf("Number of even numbers entered: %d\n", even_cnt);
    printf("Number of odd numbers entered: %d\n", odd_cnt);
    printf("Average of even numbers entered: %.2f\n", even_sum / even_cnt);
    printf("Average of odd numbers entered: %.2f\n", odd_sum / odd_cnt); 

    return 0;
}

