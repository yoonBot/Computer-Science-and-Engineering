/* C Primer Plus Ch.6 - Problem 4
 * @reproduced by yoonBot
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    char input;
    
    printf("Enter an uppercase letter: ");
    scanf("%c", &input);

    for (char current = input - 'A'; current >= 0; current--){
        for (char space = current; space > 0; space--)
            printf(" ");
        for (char ascending = 'A'; ascending + current <= input; ascending++)
            printf("%c", ascending);
        for (char descending = input - 1 - current; descending >= 'A'; descending--)
            printf("%c", descending);

        printf("\n");
    }

    return 0;
}


    
