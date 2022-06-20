#include <iostream>
#include "Header.h"
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

    // ---Generic pointer----
    // void* <Pointer name> = null;
    cout << "\n ---Generic pointer----" << endl;
    void* pointerGeneric;
    char letter = 'K';
    pointerGeneric = &letter;
    // We have use casting to indicate pointer type
    cout << "Value of char through variable: " << letter << endl;
    cout << "Value of char through pointer: " << *(char*)pointerGeneric << endl;
    cout << "Memory address pointer: " << &pointerGeneric << endl;

    int number = 13;
    pointerGeneric = &number;
    pointerGeneric = &number;
    cout << "\nNumber value: "<< number << endl;
    cout << "Value of number through pointer: "<< *(int*)pointerGeneric << endl;
    cout << "Memory address number: "<< &number << endl;
    cout << "Memory address number: "<< &pointerGeneric << endl;
    cout << "Memory address store in pointer through number: " << pointerGeneric << endl;

    // ---Reference----
    cout << "\n---Reference----" << endl;
    int num {1024};
    char letter_2 = {'A'};
    int &ref = num;
    cout << "Value of number using reference: " << ref << endl;
    cout << "Value of memory address number using reference: " << &num << endl;
    cout << "Value of memory address reference: " << &ref << endl;
    ptr = &num;
    cout << "Value of memory address through pointer: " << &ptr << endl;
    cout << "Value through pointer: " << *ptr << endl;

    int n1 = 55;
    int n2 = 66;

    cout <<"Old value of n1: " << n1 << endl;
    ChangeNumber(n1, n2);
    cout <<"Old value of n1: " << n1 << endl;

    return 0;
}



