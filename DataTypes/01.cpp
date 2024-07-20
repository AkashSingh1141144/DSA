/*
In C++, the integer data type is used to represent whole numbers (both positive and negative) without any decimal point. There are several variations of the integer data type, each with different ranges and storage sizes. Here are the commonly used integer types:

Standard Integer Types
int

Typically the default integer type.
Size: Usually 4 bytes (32 bits) on most systems.
Range: -2,147,483,648 to 2,147,483,647.
cpp

int a = 100;
short

Used for smaller integer values.
Size: Usually 2 bytes (16 bits) on most systems.
Range: -32,768 to 32,767.
cpp

short b = 200;
long

Used for larger integer values.
Size: Usually 4 bytes (32 bits) on most systems, but can be 8 bytes (64 bits) on some systems.
Range: At least -2,147,483,648 to 2,147,483,647 (32-bit) or -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 (64-bit).
cpp

long c = 300;
long long

Used for even larger integer values.
Size: Usually 8 bytes (64 bits) on most systems.
Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807.
cpp

long long d = 400;
Unsigned Integer Types
These types can only represent non-negative values, effectively doubling the upper limit of their positive range.

unsigned int

Size: Usually 4 bytes (32 bits) on most systems.
Range: 0 to 4,294,967,295.
cpp

unsigned int e = 500;
unsigned short

Size: Usually 2 bytes (16 bits) on most systems.
Range: 0 to 65,535.
cpp

unsigned short f = 600;
unsigned long

Size: Usually 4 bytes (32 bits) on most systems, but can be 8 bytes (64 bits) on some systems.
Range: At least 0 to 4,294,967,295 (32-bit) or 0 to 18,446,744,073,709,551,615 (64-bit).
cpp

unsigned long g = 700;
unsigned long long

Size: Usually 8 bytes (64 bits) on most systems.
Range: 0 to 18,446,744,073,709,551,615.
cpp

unsigned long long h = 800;
*/


#include <iostream>
using namespace std;

int main() {
    int a = 100;
    short b = 200;
    long c = 300;
    long long d = 400;
    unsigned int e = 500;
    unsigned short f = 600;
    unsigned long g = 700;
    unsigned long long h = 800;

    cout << "int: " << a << endl;
    cout << "short: " << b << endl;
    cout << "long: " << c << endl;
    cout << "long long: " << d << endl;
    cout << "unsigned int: " << e << endl;
    cout << "unsigned short: " << f << endl;
    cout << "unsigned long: " << g << endl;
    cout << "unsigned long long: " << h << endl;

    return 0;
}
