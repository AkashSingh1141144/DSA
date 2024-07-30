#include <iostream>
using namespace std;

int main ( ) {

	// Write a program to print a number is even or devisiable by 3;

	int num;

	cout << "Enter number: ";
	cin >> num;

	if((num % 2 == 0) || (num % 3 == 0)) {
		cout << "Number " << num << " Even" << endl;
	} else {
		cout << "Number " << num << " Odd" << endl ;
	}

	return 0;
}