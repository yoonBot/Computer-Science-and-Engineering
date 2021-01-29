// C++ Primer Plus Ch.3 - Problem 4
// @reproduced by yoonBot

#include <iostream>

const int SEC_TO_MIN = 60;
const int MIN_TO_HR = 60;
const int HR_TO_DAY = 24;

using namespace std;

int main(){

    long long seconds;
    long long minutes;
    long long hours;
    long long days;

    cout << "Enter the number of seconds: ";
    cin >> seconds;
    
    minutes = seconds / SEC_TO_MIN;
    hours = minutes / MIN_TO_HR;
    days = hours / HR_TO_DAY;
    
    cout << seconds << " seconds = " << days << " days, " << hours % days << " hours, " << minutes % hours << " minutes, " << seconds % minutes << " seconds." << endl;

    return 0;
}



