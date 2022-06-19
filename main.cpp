#include <iostream>

using namespace std;

int main()
{
    int* ptr;
    int integer = 100;
    ptr = &integer;
    // Size of variable
    cout << "Size of integer variable in bytes = " << sizeof(integer) << " bytes." << endl;
    // Print memory address using '&'
    cout << "Memory address integer: " << &integer << endl;
    cout << "Memory address pointer: " << &ptr << endl;
    // How pointer store memory address of integer number, so your value its equal memory address of integer variable.
    cout << "Memory address pointer: " << ptr << endl;
    return 0;
}
