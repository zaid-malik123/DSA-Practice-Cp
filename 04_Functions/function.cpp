// #include<iostream>
// using namespace std;

// void greet() {
//     cout << "Hello from function!" << endl;
// }

// int main() {
//     greet();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int sum(int a, int b) {
//     return a + b;
// }

// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;

//     cout << "Sum: " << sum(x, y) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;
//     for(int i = 1; i <= n; i++)
//         fact *= i;
//     return fact;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Factorial: " << factorial(n) << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// bool isEven(int n) {
//     return n % 2 == 0;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isEven(num))
//         cout << "Even Number" << endl;
//     else
//         cout << "Odd Number" << endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int gcd(int a, int b) {
//     while(b != 0) {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }

// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//     cout << "GCD: " << gcd(x, y) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int power(int base, int exponent) {
//     int result = 1;
//     for(int i = 1; i <= exponent; i++)
//         result *= base;
//     return result;
// }

// int main() {
//     int a, b;
//     cout << "Enter base and exponent: ";
//     cin >> a >> b;
//     cout << a << "^" << b << " = " << power(a, b) << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // Function to check prime
// bool isPrime(int n) {
//     if (n <= 1) return false; // 0, 1 prime nahi hote
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) 
//             return false; // agar divide ho gaya toh prime nahi
//     }
//     return true;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPrime(num))
//         cout << num << " is a Prime number" << endl;
//     else
//         cout << num << " is NOT a Prime number" << endl;

//     return 0;
// }

