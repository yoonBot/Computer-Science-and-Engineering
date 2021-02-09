/* C Primer Plus Ch.7 - Problem 6
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    int count = 0;
    char current, previous = 0;

    printf("Enter a text (Enter # to quit): ");
    while ((current = getchar()) != '#'){
        if (previous == 'e' && current == 'i')
            count++;
        previous = current;
    }

    printf("The letter combination \"%c%c\" was found %d times.\n", 'e', 'i', count);

    return 0;
}


