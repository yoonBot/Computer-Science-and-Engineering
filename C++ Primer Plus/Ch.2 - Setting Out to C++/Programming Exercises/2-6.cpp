// C++ Primer Plus Ch.2 - Problem 6
// @reproduced by yoonBot

#include <iostream>

using namespace std;

int distance(double);

int main(){
    
    double years;
    int astronomical;

    cout << "Enter the number of light years: ";
    cin >> years;

    astronomical = distance(years);

    cout << years << " light years = " << astronomical << " astronomical units." << endl;

    return 0;
}

int distance(double years){

    return years * 63240;
}


