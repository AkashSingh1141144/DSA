#include <iostream>
using namespace std;

int main() {
	// Write a c++ program to take length and breadth of a rectangle and print its area.

	// int length = 7;
	// int breadth = 4;

	int length;
	int breadth;

	cout << "Enter the breadth of the rectangle:" << endl;
	cin >> length;
	cout << "Enter the length of the rectangle:" << endl;
	cin >> breadth;
	

	cout << "The area of the rectangle is:" << length * breadth << endl;
	return 0;
}