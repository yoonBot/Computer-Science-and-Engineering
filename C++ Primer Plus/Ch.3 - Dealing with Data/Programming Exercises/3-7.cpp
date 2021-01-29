// C++ Primer Plus Ch.3 - Problem 7
// @reproduced by yoonBot

#include <iostream>

const double GAL_TO_LIT = 3.875;
const double KILO = 62.14;
using namespace std;

int main(){
    
    int liters;
    int gallons;
    int miles;

    cout << "Enter the number of liters used per 100 kilometers: ";
    cin >> liters;
    
    gallons = liters / GAL_TO_LIT;
    miles = 100/62.14;

    cout << liters << " liters per 100 kilometers is about " << miles / gallons << " miles per gallon" << endl;

    return 0;
}

    
    
    
