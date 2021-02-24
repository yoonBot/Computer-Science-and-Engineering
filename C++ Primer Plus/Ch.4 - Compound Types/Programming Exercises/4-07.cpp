// C++ Primer Plus Ch.4 - Problem 7
// @reproduced by yoonBot

#include <iostream>
#include <string>

using namespace std;

struct pizza{
	
	string company;
	float diameter;
	float weight;

};

int main(){

	pizza input;
	
	cout << "Enter a company: ";
	getline(cin, input.company);
	cout << "Enter the diameter of the pizza: ";
	cin >> input.diameter;
	cout << "Enter the weight of the pizza: ";
	cin >> input.weight;
	
	cout << "Information about the pizza:\n";
	cout << "Company Name: " << input.company << endl;
	cout << "Diameter: " << input.diameter << endl;
	cout << "Weight: " << input.weight << endl;

	return 0;

}


