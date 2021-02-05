/* C Primer Plus Ch.6 - Problem 11
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    float series1 = 0;
    float series2 = 0;
    
    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for(int i = 0, posneg = 1; i < terms; i++, posneg *= -1){
        series1 += (1/i);
        series2 += posneg * (1/i);
    }
    
    printf("Series 1: %.6f\n", series1);
    printf("Series 2: %.6f\n", series2);

    return 0;
}

    
