#include <iostream>
using namespace std;

int main() {
	// TODO:
	// Relational Operators
	// ==, !=, >, <, >=, <=
	// Relational operators in C++ are used to compare two values. They return a Boolean value (true or false) based on the comparison

	int num1;
	cout << "Enter 1st number: ";
	cin >> num1;

	int num2;
	cout << "Enter 2nd number: ";
	cin >> num2;

	cout << "num1 == num2: " << (num1 == num2) << endl;
	cout << "num1 != num2: " << (num1 != num2) << endl;
	cout << "num1 > num2: " <<(num1 > num2) << endl;
	cout << "num1 < num2: " << (num1 < num2) << endl;
	cout << "num1 >= num2: " << (num1 >= num2) << endl;
	cout << "num1 <= num2: " << (num1 <= num2) << endl;
	return 0;
}