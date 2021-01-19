/* C Primer Plus Ch.4 - Problem 5
 * Reproduced by yoonBot
 */

#include <stdio.h>
#include <string.h>
#define BUFFER 256

int main(void){
    
    char firstName[BUFFER], lastName[BUFFER];
    int length1, length2, i, j;
    
    length1 = strlen(firstName);
    length2 = strlen(lastName);

    printf("Enter your first and last names: ");
    scanf("%s %s", &firstName, &lastName);
    printf("%s %s\n", firstName, lastName);
    printf("%*d %*d\n", length1, length1, length2, length2); 
    printf("%s %s\n", firstName, lastName);
    printf("%-*d %-*d\n", length1, length1, length2, length2);

    return 0;
}

