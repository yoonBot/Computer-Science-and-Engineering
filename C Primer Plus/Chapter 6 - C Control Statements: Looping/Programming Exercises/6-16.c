/* C Primer Plus Ch.6 - Problem 16
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    double total = 1.0E6;
    int years = 0;

    while(total > 0){
        total += total * 0.08 - 0.1E6;
        years++;
    }

    printf("It took %d years for Chuckey to empty is wallet.\n", years);

    return 0;
}

