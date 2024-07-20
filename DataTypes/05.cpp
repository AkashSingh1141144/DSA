// Void DataType

/*
In C++, the void data type is used to specify that a function does not return a value or that a pointer does not have a specific type. It is not a data type that can be used to store values but serves specific roles in function declarations and pointer operations.*/

#include <iostream>
using namespace std;

// Function with void return type
void printSum(int a, int b) {
    cout << "Sum: " << a + b << endl;
}

// Function that returns a void pointer
void* getPointerToInt(int& value) {
    return &value;
}

int main() {
    // Call function with void return type
    printSum(5, 7);

    // Use void pointer
    int num = 10;
    void* ptr = getPointerToInt(num);
    
    // Cast void pointer to appropriate type and use
    int* intPtr = static_cast<int*>(ptr);
    cout << "Value from pointer: " << *intPtr << endl;

    return 0;
}
