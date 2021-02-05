/* C Primer Plus Ch.6 - Problem 1
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    char lowercase[26];
    lowercase[0] = 'a';

    for (char var1 = 'a'; var1 <= 'z'; var1++)
        lowercase[var1] = var1;

    for (char var1 = 'a'; var1 <= 'z'; var1++)
        printf("%c ", lowercase[var1]);

    printf("\n");

    return 0;
}

