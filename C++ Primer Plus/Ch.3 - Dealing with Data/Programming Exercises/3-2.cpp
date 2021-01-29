// C++ Primer Plus Ch.3 - Problem 2
// @reproduced by yoonBot

#include <iostream>

const int FEET_TO_INCHES = 12;
const double INCHES_TO_METERS = 0.0254;

using namespace std;

int main(){
    
    double height, feet, inches, pound, weight;

    cout << "Enter your height in feet and inches\nFeet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    cout << "Enter your weight in pounds: ";
    cin >> pound;

    height = FEET_TO_INCHES * feet + inches;
    height = height * INCHES_TO_METERS;
    
    weight = pound / 2.2;
    
    cout << "Your BMI index is: " << weight / (height * height) << endl;

    return 0;
}

