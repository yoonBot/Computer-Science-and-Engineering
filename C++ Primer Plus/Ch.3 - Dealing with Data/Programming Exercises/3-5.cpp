// C++ Primer Plus Ch.3 - Problem 5
// @reproduced by yoonBot

#include <iostream>

using namespace std;

int main(){

    long long worldPop, USPop;
    double percentage = USPop / worldPop;

    cout << "Enter the world's population: ";
    cin >> worldPop;
    cout << "Enter the population of the US: ";
    cin >> USPop;

    cout << "The population of the US is " << percentage * 100.0 << "% of the world population." << endl;

    return 0;
}

