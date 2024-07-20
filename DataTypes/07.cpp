// String DataType

/*In C++, the string data type is used to represent sequences of characters. It is part of the Standard Library and provides a flexible and easy-to-use way to handle text data.

String Data Types
std::string

Definition: Represents a sequence of characters, dynamically sized.
Header: #include <string>
Size: Varies as it grows or shrinks based on the length of the string.
Usage: Most commonly used string type in C++*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // String initialization and assignment
    string str1 = "Hello";
    string str2 = "World";

    // Concatenation
    string combined = str1 + " " + str2;

    // Output combined string
    cout << "Combined String: " << combined << endl;

    // Length and size
    cout << "Length of combined string: " << combined.length() << endl;

    // Accessing characters
    cout << "First character: " << combined[0] << endl;

    // Substrings
    string sub = combined.substr(0, 5);
    cout << "Substring: " << sub << endl;

    // Finding a substring
    size_t pos = combined.find("World");
    if (pos != string::npos) {
        cout << "'World' found at position: " << pos << endl;
    }

    // Replacing a substring
    combined.replace(6, 5, "C++");
    cout << "After replacement: " << combined << endl;

    // Comparing strings
    if (str1 == "Hello") {
        cout << "str1 is 'Hello'" << endl;
    }

    return 0;
}
