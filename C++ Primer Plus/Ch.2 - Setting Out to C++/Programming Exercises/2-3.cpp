// C++ Primer Plus Ch.2 -- Problem 3
// @reproduced by yoonBot

#include <iostream>

using namespace std;

void mice();
void run();

int main(){
    
    mice();
    mice();
    run();
    run();

    return 0;
}

void mice(){

    cout << "Three blind mice." << endl;

}

void run(){

    cout << "See how they run." << endl;

}


