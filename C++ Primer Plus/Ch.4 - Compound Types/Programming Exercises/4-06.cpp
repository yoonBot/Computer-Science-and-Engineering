// C++ Primer Plus Ch.4 - Problem 6
// @reproduced by yoonBot

#include <iostream>

using namespace std;

struct CandyBar{
	
	char brand[20];
	float weight;
	int calories;
};

int main(){
	
	CandyBar snack[3] = {
		
		{"Mocha Munch", 2.3, 350},
		{"M & M", 0.2, 375},
		{"Skittles", 0.2, 360}
	};
	
	cout << "Candy Brand: \tCandy Weight: \tCandy Calories: \n";			
	cout << snack[0].brand << " \t" << snack[0].weight << "\t\t" << snack[0].calories << endl;
	cout << snack[1].brand << " \t\t" << snack[1].weight << "\t\t" << snack[1].calories << endl;
	cout << snack[2].brand << " \t" << snack[2].weight << "\t\t" << snack[2].calories << endl;
	
	return 0;
} 
	
