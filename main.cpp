#include <iostream>

using namespace std;

int main()
{
    // Denote that 'ptr' points to null value(C++ v11)
    int* ptr {nullptr};
    int integer {100};
    ptr = &integer;
    // Change value of variable integer through pointer ptr
    cout << "Old integer value: " << integer << endl;
    *ptr = 500;
    cout << "New integer value: " << integer << endl;

    // Size of variable
    cout << "Size of integer variable in bytes = " << sizeof(integer) << " bytes." << endl;

    // Print memory address using '&' (memory value)
    cout << "Memory address integer: " << &integer << endl;

    // Print memory address of pointer(memory value)
    cout << "Memory address pointer: " << &ptr << endl;

    // How pointer store memory address of integer number, so your value its equal memory address of integer variable.
    cout << "Value of address that pointer points(same memory address value 'integer'): " << ptr << endl;

    // Print value of pointer variable. This case equal 500
    cout << "Value of variable pointer points(same variable value 'integer'): " << *ptr << endl;
    return 0;
}
