// C++ Primer Plus CH.2 - Problem 5
// @reproduced by yoonBot

#include <iostream>

using namespace std;

int temperature(int);

int main(){

    int celsius;
    int fahrenheit;

    cout << "Please enter a Celsius value: ";
    cin >> celsius;
    
    fahrenheit = temperature(celsius);

    cout << celsius << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;

    return 0;
}

int temperature(int celsius){

    return celsius * 1.8 + 32.0;
}

    
