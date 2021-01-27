// C++ Primer Plus Ch.2 - Problem 2
// @reproduced by yoonBot

#include <iostream>

using namespace std;

int main(){

    int yard = 220;
    int furlong;

    cout << "Enter a distance in furlongs: ";
    cin >> furlong;
    
    yard = 220 * furlong;

    cout << furlong << " furlongs = " << yard << " yards." << endl;

    return 0;
}

