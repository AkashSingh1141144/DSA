#include <iostream>
using namespace std;

int main() {
	// TODO:
	// Logical operators
	// && (AND), || (OR), ! (NOT)
	// Logical operators in C++ are used to perform logical operations on boolean expressions. They are essential for making decisions based on multiple conditions.

	int num1;
	cout << "Enter 1st Number: ";
	cin >> num1;

	int num2;
	cout << "Enter 2nd Number: ";
	cin >> num2;

	cout << "The result of logical AND operation is: " << (num1 > num2 && num2 > 0) << endl;
	cout << "The result of logical OR operation is: " << (num1 > num2 || num2 > 0) << endl;
	cout << "The result of logical NOT operation is: " << !(num1 > num2) << endl;
	return 0;
}