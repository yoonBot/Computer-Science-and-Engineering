// C++ Primer Plus Ch.3 - Problem 3
// @reproduced by yoonBot

#include <iostream>

const double SEC_TO_MIN = 60;
const double MIN_TO_ARC = 60;

using namespace std;

int main(){
    
    float degrees, minutes, seconds;
    
    cout << "Enter a latitude in degrees, minutes, and seconds:" << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;
    
    float new_minutes = minutes + (seconds/SEC_TO_MIN);
    float new_degrees = degrees + (new_minutes/MIN_TO_ARC);

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << new_degrees << " degrees" << endl;

    return 0;
}

