#include <iostream>
using namespace std;

int main ( ) {

	// Write a program to divide people into 3 age groups depending upon their age.

	int age;

	cout << "Enter Age: ";
	cin >> age;

	if(age < 12) {
		cout << "Child !";
	} else if (age < 18) {
		cout << "Adult !";
	} else if (age < 60) {
		cout << "Teenager !" << endl;
	} else {
		cout << "Senior cetision !";
	}

	return 0;
}