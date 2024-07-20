// Boolean DataType

/*
In C++, the boolean data type is used to represent truth values, which can be either true or false. The bool type is integral to logic operations and decision-making in C++ programs



bool Data Type
Definition: Represents a boolean value, which can be either true or false.
Size: Typically 1 byte (8 bits), though the size is not strictly defined by the C++ standard and may vary depending on the implementation.
Range: true or false.
*/

#include <iostream>
using namespace std;

int main() {
    // Boolean variables
    bool isRainy = true;
    bool isWeekend = false;
    
    // Logical operations
    bool goOutside = !isRainy && isWeekend;
    bool stayHome = isRainy || !isWeekend;
    
    // Output the values and results of boolean operations
    cout << "Is it rainy? " << (isRainy ? "Yes" : "No") << endl;
    cout << "Is it the weekend? " << (isWeekend ? "Yes" : "No") << endl;
    cout << "Should I go outside? " << (goOutside ? "Yes" : "No") << endl;
    cout << "Should I stay home? " << (stayHome ? "Yes" : "No") << endl;
    
    // Conditional statements
    if (isRainy) {
        cout << "It is rainy, so bring an umbrella." << endl;
    } else {
        cout << "It is not rainy, no need for an umbrella." << endl;
    }

    return 0;
}
