#include <iostream>
using namespace std;

int main ( ) {
	// write a program to print a number is divisiable by 3 and number even 
	int num;

	cout << "Enter number: " << endl;
	cin >> num;

	if((num % 2 == 0) && (num % 3 == 0)) {
		cout << "Number is: " << num << endl;
	}

	return 0;
}