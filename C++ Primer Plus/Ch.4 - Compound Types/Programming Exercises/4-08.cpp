// C++ Primer Plus Ch.4 - Problem 8
// @reproduced by yoonBot

#include <iostream>

using namespace std;

struct pizza{
	
	char company[50];
	float diameter;
	float weight;

};

int main(){

	pizza *input = new pizza;
	
	cout << "Enter diameter of the pizza: ";
	cin >> input->diameter;
	cin.get();
	cout << "Enter a Company: ";
	cin.getline(input->company, 20);
	cout << "Enter weight of the pizza: ";
	cin >> input->weight;
	
	cout << "Information about the pizza:\n";
	cout << "Company Name: " << input->company << endl;
	cout << "Diameter: " << input->diameter << endl;
	cout << "Weight: " << input->weight << endl;
	
	delete input;
	
	return 0;
}
	
