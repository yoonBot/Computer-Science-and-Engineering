// C++ Primer Plus Ch.4 - Problem 5
// @reproduced by yoonBot

#include <iostream>

using namespace std;

struct CandyBar{
	
	char brand[20];
	float weight;
	int calories;
};

int main(){
	
	CandyBar snack = {
		
		"Mocha Munch",
		2.3,
		350
	};

	cout << "Information about snack:\n";
	cout << "Brand Name: " << snack.brand << endl;
	cout << "Weight: " << snack.weight << endl;
	cout << "Number of Calories: " << snack.calories << endl;
	
	return 0;
}

