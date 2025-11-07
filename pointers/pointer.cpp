// pointers:- A pointer is a variable that stores the memory address of another variable.

// syntax to declare a pointer:
// data_type *pointer_name;

// & - Address of operator: It is used to get the address of a variable.
// * - Dereference operator: It is used to access the value at the address stored in the pointer.


// Example:
#include<iostream>
using namespace std;

int main(){
    int *p; // Declare a pointer to an integer
    int a = 10;
    p = &a; // Assign the address of 'a' to the pointer 'p'
    cout << "Value of a: " << *p << endl; // Dereference the pointer to get the value of 'a'
    cout << "Address of a: " << p << endl; // Print the address stored in the pointer
    int b = 20;
    p = &b; // Reassign the pointer to the address of 'b'
    cout << "Value of b: " << *p << endl; // Dereference the pointer to get the value of 'b'
    cout << "Address of b: " << p << endl; // Print the address stored in the pointer
    cout << *p;
    return 0;
}
// Output:
// Value of a: 10
// Address of a: 0x7ffee4b8c8bc
// Value of b: 20
// Address of b: 0x7ffee4b8c8b8