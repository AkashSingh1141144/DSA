#include <iostream>
using namespace std;

int main( ) {

	int num;

	cout << "Enter Number: ";
	cin >> num;

	// int num2 = num % 2;

	if(num % 2 == 0) {
		cout << "Your Entered Number is Even !";
	} else {
		cout << "Your Entered Number is Odd !";
	}

	return 0;
}