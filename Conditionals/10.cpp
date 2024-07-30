#include <iostream>
using namespace std;

int main ( ) {

	char character;

	cout << "Enter character: ";
	cin >> character;

	switch(character) {
		case 'a':
		cout << "character is vovel";
		break;

		case 'e':
		cout << "character is vovel";
		break;

		case 'i':
		cout << "character is vovel";
		break;

		case 'o':
		cout << "character is vovel";
		break;

		case 'u':
		cout << "character is vovel";
		break;

		default:
		cout << "character is consonants";
		break;
	}

	return 0;
}