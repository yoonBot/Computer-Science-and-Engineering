// C++ Primer Plus Ch.2 - Problem 7
// @reproduced by yoonBot

#include <iostream>

using namespace std;

void convert(int, int);

int main(){

    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;

    convert(hours, minutes);

    return 0;
}

void convert(int hours, int minutes){

    cout << "Time: " << hours << ":" << minutes << endl;
}

