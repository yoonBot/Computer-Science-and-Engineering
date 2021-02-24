// C++ Primer Plus Ch.4 - Problem 1
// @reproduced by yoonBot

#include <iostream>
#include <string>

using namespace std;

int main(){
	
	char first[50], last[50];
	char grade;
	int age;

	cout << "What is your first name? ";
	cin.getline(first, 50);
	cout << "What is your last name? ";
	cin.getline(last, 50);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	char new_grade = grade + 1;
	cout << "What is your age? ";
	cin >> age;	
	
	cout << "Name: " << last << ", " << first << endl;
	cout << "Grade: " << new_grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}





