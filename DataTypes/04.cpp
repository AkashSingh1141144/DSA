// Floating Point DataType

/*In C++, floating-point data types are used to represent numbers that require fractional precision, such as decimals. They are essential for calculations involving real numbers, such as scientific computations, financial calculations, and graphics.

float-----
Definition: Represents single-precision floating-point numbers.
Size: Typically 4 bytes (32 bits).
Precision: About 6-7 decimal digits.
Range: Approximately ±3.4E-38 to ±3.4E+38

double------
Definition: Represents double-precision floating-point numbers.
Size: Typically 8 bytes (64 bits).
Precision: About 15-16 decimal digits.
Range: Approximately ±1.7E-308 to ±1.7E+308.

long double-------
Definition: Represents extended-precision floating-point numbers.
Size: Typically 8 or 12 bytes (64 or 96 bits), but can be 16 bytes (128 bits) on some systems.
Precision: Greater than double (exact precision depends on the implementation).
Range: Greater than double.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Floating-point variables
    float a = 5.5f;
    double b = 10.123456789;
    long double c = 123456.789101112L;

    // Arithmetic operations
    float sum = a + 3.2f;
    double product = b * 2.5;
    long double division = c / 10.0L;

    // Output the values and results of floating-point operations
    cout << "Float value: " << a << endl;
    cout << "Double value: " << b << endl;
    cout << "Long double value: " << c << endl;
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;

    // Mathematical functions
    double sqrtValue = sqrt(25.0);
    double powerValue = pow(2.0, 8.0);

    cout << "Square root of 25: " << sqrtValue << endl;
    cout << "2 raised to the power of 8: " << powerValue << endl;

    return 0;
}
