// C++ Primer Plus Ch.4 - Problem 3
// @reproduced by yoonBot

#include <iostream>
#include <cstring>

using namespace std;

int main(){

	char first[20], last[20];
	char output[100];
	
	cout << "Enter your first name: ";
	cin >> first;
	cout << "Enter your last name: ";
	cin >> last;
	strcpy(output, last);
	strcat(output, ", ");
	strcat(output, first);
	
	cout << "Here's the information in a single string: " << output << endl;
	
	return 0;
}
