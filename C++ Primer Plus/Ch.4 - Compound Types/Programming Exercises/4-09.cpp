// C++ Primer Plus Ch.4 - Problem 9
// @reproduced by yoonBot

#include <iostream>
#include <cstring>

using namespace std;

struct CandyBar{
	
	char brand[20];
	float weight;
	int calories;
};

int main(){
	
	CandyBar *snack = new CandyBar[3];
	
	strcpy(snack[0].brand, "Mocha Munch");
	strcpy(snack[1].brand, "M & M");
	strcpy(snack[2].brand, "Skittles");
	snack[0].weight = 2.3;
	snack[1].weight = 0.2;
	snack[2].weight = 0.2;
	snack[0].calories = 350;
	snack[1].calories = 375;
	snack[2].calories = 360;

	cout << "Candy Brand: \tCandy Weight: \tCandy Calories: \n";
	cout << snack[0].brand << " \t" << snack[0].weight << "\t\t" << snack[0].calories << endl;
	cout << snack[1].brand << " \t\t" << snack[1].weight << "\t\t" << snack[1].calories << endl;
	cout << snack[2].brand << " \t" << snack[2].weight << "\t\t" << snack[2].calories << endl;                  	
	delete snack;
	
	return 0;
}
