#include <iostream>
using namespace std;

int main() {

	int a =4;
	cout << sizeof(a) << endl; //4

	char name = 'a';
	cout << sizeof(name) << endl;

	bool flag;
	a = name ? flag = true : flag = false;
	cout << flag <<endl;

	cout << (&a) << endl;

	int a1 = 6;
	cout << (a1++) << endl;

	int b = 6;
	cout << (++b) << endl;

	return 0;
}