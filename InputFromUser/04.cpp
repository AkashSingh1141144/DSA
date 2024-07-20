// swap two values and its sum 

#include <iostream>
using namespace std;

int main () {
	int value1;
	int value2;

	cin >> value1;
	cout << "Value 1 is " << value1 << endl;

	cin >> value2;
	cout << "Value 2 is " << value2 << endl;

	int value3;
	value3 = value2;
	value2 = value1;
	value1 = value3;

	cout << "Value 1 is:" << value1 << endl;
	cout << "Value 2 is:" << value2 << endl;
	cout << "Sum of Values is:" << value1 + value2 <<endl;

	return 0;
	

}