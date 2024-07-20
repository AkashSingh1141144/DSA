// Character Datatype

/*
In C++, the character data type (char) is used to store single characters. Each character is typically represented by a single byte, which means it can hold any of the 256 different values that fit in a byte (including control characters, alphanumeric characters, punctuation, etc.)
*/

#include <iostream>
using namespace std;

int main() {
    // Standard character
    char letter = 'A';
    signed char signedLetter = 'B';
    unsigned char unsignedLetter = 'C';

    // Wide character
    wchar_t wideLetter = L'D';

    // UTF-16 and UTF-32 characters
    char16_t utf16Letter = u'E';
    char32_t utf32Letter = U'F';

    // Output the values of the character variables
    cout << "char: " << letter << endl;
    cout << "signed char: " << signedLetter << endl;
    cout << "unsigned char: " << unsignedLetter << endl;
    wcout << L"wchar_t: " << wideLetter << endl;
    cout << "char16_t: " << utf16Letter << endl;
    cout << "char32_t: " << utf32Letter << endl;

    return 0;
}
