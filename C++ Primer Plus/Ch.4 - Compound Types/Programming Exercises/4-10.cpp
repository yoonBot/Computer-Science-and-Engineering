// C++ Primer Plus Ch.4 - Problem 10
// @reproduced by yoonBot

#include <iostream>
#include <array>

using namespace std;

int main(){

	array<float, 3> dash;
	
	cout << "Enter your First dash in seconds: ";
	cin >> dash[0];
	cout << "Enter your Second dash in seconds: ";
	cin >> dash[1];
	cout << "Enter your Third dash in seconds: ";
	cin >> dash[2];
	
	cout << "\nYour First dash: " << dash[0] << " seconds\n";
	cout << "Your Second dash: " << dash[1] << " seconds\n";
	cout << "Your Third dash: " << dash[2] << " seconds\n";
	cout << "\nYour Average Time in Seconds: " << (dash[0] + dash[1] + dash[2]) / 3 << " seconds\n";
	
	return 0;
}
