/* C Primer Plus - Ch.6 - Problem 3
 * @reproduced by yoonBot
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

    for (char start = 'F'; start >= 'A'; start--){
        for (char current = 'F'; current >= start; current--){
           printf("%c ", current);
        }
        printf("\n");
    } 

    return 0;
}

