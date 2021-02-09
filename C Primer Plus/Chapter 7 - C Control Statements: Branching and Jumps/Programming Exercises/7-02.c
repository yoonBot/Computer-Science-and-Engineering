/* C Primer Plus Ch.7 - Problem 2 */

#include <stdio.h>
#include <ctype.h>
int main(){

    char ch;
    int count = 0;

    printf("Enter input (Enter # to quit):\n");
    while((ch = getchar()) != '#'){
        if (isprint(ch)){
            printf("'%c' -> %d", ch, ch);
            if(++count % 8 == 0)
                printf("\n");
        }
    }

    return 0;
}


