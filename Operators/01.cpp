#include <iostream>
using namespace std;

int main() {
	// TODO:
	//Arithmetic Operators
	// +, -, *, /, %
	// + is used for addition, - is used for subtraction, * is used for multiplication, / is used for division, % is used for modulus

	int num1;
	cout << "Enter 1st number: ";
	cin >> num1;
	int num2;
	cout << "Enter 2nd number: ";
	cin >> num2;

	cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
	cout << "Difference of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
	cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
	cout << "Quotient of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
	cout << "Remainder of " << num1 << " and " << num2 << " is: " << num1 % num2 << endl;
	return 0;
}