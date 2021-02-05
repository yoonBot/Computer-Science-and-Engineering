/* C Primer Plus Ch.6 - Problem 15
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){
    
    double daphne, deidre;
    int years = 0;
    
    daphne = deidre = 100.0;
    while(deidre <= daphne){
        daphne += 100.0 * 0.10;
        deidre += deidre * 0.05;
        years++;
    }

    printf("After %d years:\nDaphne: $%.2lf\nDeidre: $%.2lf\n", years, daphne, deidre);

    return 0;
}


