// C++ Primer Plus Ch.4 - Problem 4
// @reproduced by yoonBot

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	string first, last, output;
	
	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your last name: ";
	cin >> last;
	
	output = last + ", " + first;

	cout << "Here's the information in a single string: " << output << endl;	
	
	return 0;
}
	
