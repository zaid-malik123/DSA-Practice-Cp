// Array → An array stores multiple values of the same data type in contiguous (continuous) memory locations

// Creating Arrays in C++

// 1) int arr[5] = {1, 2, 3, 4, 5};

//   Creates an array of size 5.
//   All values are explicitly given.

// 2) Define an array without specifying size
//     int arr[] = {1, 2, 3};
//     Size is automatically determined from the number of elements.
//     In this example, size = 3.

// 3)  Take array input from the user
//     int arr[10];
//     for (int i = 0; i < 10; i++) {
//     cin >> arr[i];
//     }
//    Creates an array of size 10.
//    Fills it with values entered by the user.

// 4)   Partial initialization
//      int a[5] = {8, 4};

//      Result: [8, 4, 0, 0, 0]
//      Remaining elements are automatically set to 0.

// 5)    Initialize all elements with zero
//       int arr[5] = {0};

//       Result: [0, 0, 0, 0, 0]
//       Only works for 0.
// You cannot do {1}, {-1}, etc., to fill all elements with the same value.

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5];
//     for(int i = 0; i < 5; i++){
//         cout << "Enter the " << i << " element of array: ";
//         cin >> arr[i];
//     }

//     cout << "Array elements are: ";
//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }
