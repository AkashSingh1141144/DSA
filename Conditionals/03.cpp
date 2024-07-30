#include <iostream>
using namespace std;

int main( ) {
	
	int marks;

	cout << "Enter marks: ";
	cin >> marks;

	if(marks > 80) {
		cout << "A grade";
	} else if (marks > 60) {
		cout << "B grade";
	} else if (marks > 40) {
		cout << "C grade";
	} else {
		cout << "Fall";
	}

	return 0;
}