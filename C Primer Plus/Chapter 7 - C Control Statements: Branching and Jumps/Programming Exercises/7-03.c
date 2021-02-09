/* C Primer Plus Ch.7 - Problem 3
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int input, even_cnt = 0, odd_cnt = 0; 
    float even_sum = 0, odd_sum = 0;
    
    printf("Enter an integer input (Press 0 to quit): ");
    while ((scanf("%d", &input) == 1) && (input != 0)){
        if (input % 2 == 0){
            even_cnt++;
            even_sum += input;
        }
        else{
            odd_cnt++;
            odd_sum += input;
        }
        printf("Enter additional input (Press 0 to quit): ");
    }
    printf("Number of even integers: %d\n", even_cnt);
    printf("Number of odd integers: %d\n", odd_cnt);
    printf("Average of even integers: %.2f\n", even_sum / even_cnt);
    printf("Average of odd integers: %.2f\n", odd_sum / odd_cnt);

    return 0;
}


