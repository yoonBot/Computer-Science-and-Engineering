// C++ Primer Plus Ch.3 - Problem 6
// @reproduced by yoonBot

#include <iostream>

using namespace std;

int main(){

    double miles, gasoline;
    
    cout << "Enter number of miles driven: ";
    cin >> miles;
    cout << "Enter number of gallons of gasoline used: ";
    cin >> gasoline;
    
    cout << "You have driven: " << miles / gasoline << " miles per gallon." << endl;

    return 0;
}

