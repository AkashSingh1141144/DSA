#include <iostream>
using namespace std;

int main() {
	// Assignment Operator
	/*
		(=) is used to assign the value on the right to the variable on the left. 
		(+=) is used to add the value on the right to the variable on the left and then assign the result to the variable on the left. a+= 1 -> a = a + 1
		(-=) is used to subtract the value on the right from the variable on the left and then assign the result to the variable on the left. a-= 1 -> a = a - 1
		(/=) is used to divide the variable on the left by the value on the right and then assign the result to the variable on the left. a/= 1 -> a = a / 1
		(*=) is used to multiply the variable on the left by the value on the right and then assign the result to the variable on the left. a*= 1 -> a = a * 1
		(%=) is used to take the remainder of the variable on the left divided by the value on the right and then assign the result to the variable on the left. a%= 1 -> a = a % 1
	*/

    int a = 10;
    int b = 5;

    // Simple Assignment
    a = b;
    std::cout << "a = " << a << std::endl;

    // Add and Assignment
    a += b;
    std::cout << "a += b: " << a << std::endl;

    // Subtract and Assignment
    a -= b;
    std::cout << "a -= b: " << a << std::endl;

    // Multiply and Assignment
    a *= b;
    std::cout << "a *= b: " << a << std::endl;

    // Divide and Assignment
    a /= b;
    std::cout << "a /= b: " << a << std::endl;

    // Modulus and Assignment
    a = 10; // resetting a to 10 for modulus example
    a %= b;
    std::cout << "a %= b: " << a << std::endl;

    // Bitwise AND and Assignment
    a &= b;
    std::cout << "a &= b: " << a << std::endl;

    // Bitwise OR and Assignment
    a |= b;
    std::cout << "a |= b: " << a << std::endl;

    // Bitwise XOR and Assignment
    a ^= b;
    std::cout << "a ^= b: " << a << std::endl;

    // Bitwise Left Shift and Assignment
    a = 10; // resetting a to 10 for shift example
    a <<= 1;
    std::cout << "a <<= 1: " << a << std::endl;

    // Bitwise Right Shift and Assignment
    a >>= 1;
    std::cout << "a >>= 1: " << a << std::endl;

    return 0;
}
