/* C Primer Plus Ch.7 - Problem 4 
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    char ch;
    int exclamation = 0, doubleExclamation = 0;
    printf("Enter string input: ");
    while ((ch = getchar()) != '#'){
        if (ch == '.'){
            putchar('!');
            exclamation++;
        }
        else if (ch == '!'){
            putchar('!');
            putchar('!');
            doubleExclamation++;
        }
        else
            putchar(ch);
    }

    printf("%d places replaced by single exclamation marks.\n", exclamation);
    printf("%d places replaced by double exclamation marks.\n", doubleExclamation);                                                 
    printf("%d substitutions made total.\n", exclamation + doubleExclamation);
    
    return 0;

}



