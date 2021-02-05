/* C Primer Plus Ch.6 - Problem 6
 * @reproduced by yoonBot
 */

#include <stdio.h>
#include <string.h>
#define MAX 100

int main(){

    char word[MAX];

    printf("Enter a word to be printed: ");
    scanf("%s", word);

    int size = strlen(word);
    for(int i = size; i >= 0; i--)
        printf("%c ", word[i]);

    printf("\n");

    return 0;
}


