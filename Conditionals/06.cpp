#include <iostream>
using namespace std;

int main( ) {

	int marks;

	cout << "Enter marks: ";
	cin >> marks;

	if(marks > 33) {
		cout << "Pass" << endl;
	} else {
		cout << "Fall" << endl;
	}

	// Ternarry operator
	marks > 33 ? cout << "Pass" : cout << "Fall" << endl;

	return 0;
} 