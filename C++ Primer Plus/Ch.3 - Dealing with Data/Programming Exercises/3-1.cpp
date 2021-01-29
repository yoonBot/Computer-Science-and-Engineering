// C++ Primer Plus Ch.3 - Problem 1
// @reproduced by yoonBot

#include <iostream>

using namespace std;
const int FEET = 12;

int main(){

    int inches;
    
    cout << "Enter your height in integer inches:_____\b\b\b\b ";
    cin >> inches;

    cout << inches << " inches is: " << inches / FEET << " feet and " << inches % FEET << " inches." << endl;

    return 0;
}



