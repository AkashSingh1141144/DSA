#include <iostream>
using namespace std;

int main () {
	// Nested if-else statment
	int marks;

	cout << "Enter marks: ";
	cin  >> marks;

	if(marks < 33) {
		if (marks > 80) {
			cout << "Gracefully pass";
		}
	} else {
		cout << "pass";
	}

	return 0;
}