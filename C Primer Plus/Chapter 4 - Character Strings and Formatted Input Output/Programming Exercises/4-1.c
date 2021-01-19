/* C Primer Plus Ch.4 - Problem 1
 * reproduced by yoonBot
 */

#include <stdio.h>

int main(void){

    char first[30], last[30];
    printf("Enter your firstname and lastname: ");
    scanf("%s %s", &first, &last);
    printf("%s, %s\n", last, first);

    return 0;
}

