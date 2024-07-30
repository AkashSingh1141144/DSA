#include <iostream>
using namespace std;

int main( ) {
	// If conditional --

	int marks;

	cout << "Enter Your mark: ";
	cin >> marks;

	if(marks < 33) {
		cout << "Sorry you'r fall"; 
	} else {
		cout << "Congrats you'r pass";
	}

	return 0;
}