#include <iostream> 
using namespace std;

int main() {
	// Wrtie a C++ program to swap two numbers using a third variable.

	int a, b, c;

	cout << "Enter the first number: ";
	cin >> a;
	cout << "Enter the second number: ";
	cin >> b;

	c = b;
	b = a;
	a = c;

	cout << "After swapping, the first number is " << a << endl;
	cout << "After swapping, the second number is " << b << endl;
	cout << "Sum of the numbers is " << a + b << endl;
	return 0;

}