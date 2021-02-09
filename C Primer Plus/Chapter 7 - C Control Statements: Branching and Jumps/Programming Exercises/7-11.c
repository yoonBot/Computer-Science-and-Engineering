/* C Primer Plus Ch.7 - Problem 11
 * @reproduced by yoonBot
 */

#include <stdio.h>

int main(){

    char option;
    int artichoke_input = 0, beet_input = 0, carrot_input = 0, netInput = 0; 
    double artichoke_price = 0, carrot_price = 0, beet_price = 0, net_price = 0;

    while (1){
        printf("Enter your choice of input:\n");
        printf("a) Artichoke\n");
        printf("b) beets\n");
        printf("c) carrots\n");
        printf("q) Quit\n");
        option = getchar();
        switch(option){
            case 'a':
                printf("Enter how many pounds of artichoke desired: ");
                scanf("%d", &artichoke_input);
                netInput += artichoke_input;
                artichoke_price = (1.25 * artichoke_input);
                if (artichoke_input <= 5)
                    artichoke_price += 3.50;
                else if (artichoke_input > 5 && artichoke_input < 20)
                   artichoke_price += 10.00;
                else
                    artichoke_price += 8.00 + 0.10 * artichoke_input;
                continue;

            case 'b':
                printf("Enter how many pounds of beets desired: ");
                scanf("%d", &beet_input);
                netInput += beet_input;
                beet_price = (0.65 * beet_input);
                if (beet_input <= 5)
                    beet_price += 3.50;
                else if (beet_input > 5 && beet_input < 20)
                    beet_price += 10.00;
                else
                    beet_price += 8.00 + 0.10 * beet_input;
                continue;

            case 'c':
                printf("Enter how many pounds of carrots desired: ");
                scanf("%d", &carrot_input);
                netInput += carrot_input;
                carrot_price = (0.89 * carrot_input);
                if (carrot_input <= 5)
                    carrot_price += 3.50;
                else if (carrot_input > 5 && carrot_input < 20)
                    carrot_price += 10.00;
                else 
                    carrot_price += 8.00 + 0.10 * carrot_input;
                continue;

            case 'q':
                break;

            default:
                printf("Sorry. Not an option. Please try again.\n\n");
                continue;
        }

        net_price = artichoke_price + beet_price + carrot_price;
        
        if (net_price >= 100)
            net_price = net_price - net_price * 0.05;

        printf("Category:\tCost per pound\tpound ordered\tTotal cost for each vegetable\n");
        printf("Artichoke:\t$%10.2lf\t%10d\t$%10.2lf\n", 1.25, artichoke_input, artichoke_price); 
        printf("Beets:    \t$%10.2lf\t%10d\t$%10.2lf\n", 0.65, beet_input, beet_price);
        printf("Carrots:  \t$%10.2lf\t%10d\t$%10.2lf\n", 0.89, carrot_input, carrot_price);

        printf("\nTotal price: $%.2lf\n", net_price);

        return 0;
    }
}
