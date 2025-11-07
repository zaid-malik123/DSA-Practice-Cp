// pointers:- A pointer is a variable that stores the memory address of another variable.

// syntax to declare a pointer:
// data_type *pointer_name;

// & - Address of operator: It is used to get the address of a variable.
// * - Dereference operator: It is used to access the value at the address stored in the pointer.


// Example:
// #include<iostream>
// using namespace std;

// int main(){
//     int *p; // Declare a pointer to an integer
//     int a = 10;
//     p = &a; // Assign the address of 'a' to the pointer 'p'
//     cout << "Value of a: " << *p << endl; // Dereference the pointer to get the value of 'a'
//     cout << "Address of a: " << p << endl; // Print the address stored in the pointer
//     int b = 20;
//     p = &b; // Reassign the pointer to the address of 'b'
//     cout << "Value of b: " << *p << endl; // Dereference the pointer to get the value of 'b'
//     cout << "Address of b: " << p << endl; // Print the address stored in the pointer
//     cout << *p;
//     return 0;
// }
// Output:
// Value of a: 10
// Address of a: 0x7ffee4b8c8bc
// Value of b: 20
// Address of b: 0x7ffee4b8c8b8

// Note: The actual memory addresses will vary each time the program is run.

// In this example, we declare a pointer 'p' that can point to an integer. We then assign it the address of variable 'a' and later reassign it to the address of variable 'b'. We use the dereference operator (*) to access the values stored at those addresses.

// Pointer in Array:
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p = arr; // point to the base address of the array

//     cout << arr; // prints the base address of the array in the first element
//     cout << endl;
//     cout << *arr; // prints the value at the base address of the array (first element)
//     cout << endl;

//     cout << (arr + 0); // prints the address of the first element
//     cout << endl;
//     cout << *(arr + 0); // prints the value of the first element
//     cout << endl;

//     cout << &arr[1]; // prints the address of the first element
//     cout << endl;
//     cout << arr[1]; // prints the value of the first element
//     cout << endl;

//     cout << "Using pointer :-" << (p+0) << endl;
//     cout << "Using pointer :-" << *p << endl;

//     p = &arr[1];
//     cout << "Using pointer after incrementing address:-" << p << endl;
//     cout << "Using pointer after incrementing address:-" << *p << endl;
    

//     // print all addresses and values using loop
//     for(int i = 0; i < 5; i++){
//         cout << "Address of arr[" << i << "] = " << (arr + i) << ", Value = " << *(arr + i) << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {10, 20, 30, 40, 50};
//     int *p = arr;
//     // Decrementing pointer to point to the last element
//     for(int i = 0; i < 5; i++){
//         cout<< *(p + 4) << endl;
//         p--;
//     }

//     //incrementing pointer to point to the first element
//     p = arr;
//     for(int i = 0; i < 5; i++){
//         cout<< *(p) << endl;
//         p++;
//     }

//     return 0;
// }
// Pointer me ham arithematic operator use kar sakte hai jaise ki increment(++) aur decrement(--) to move to the next or previous memory location of the data type the pointer is pointing to. or sath me + or - operator bhi use kar sakte hai to move multiple locations at once.