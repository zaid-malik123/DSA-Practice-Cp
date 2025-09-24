// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter any number";
//     cin>>n;
//     if(n >= 0){
//         cout<< "this number is +ve number";
//     }
//     else{
//         cout<< "this number is -ve number";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<< "Enter your age :";
//     cin>>age;
//     if(age >= 18){
//         cout<< "you're elegible for voting";
//     }
//     else{
//         cout<< "you are not elegible for voting because you are not adult";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter any number : ";
//     cin>>n;
//     if (n%2 == 0){
//         cout<< "this number is even number";
//     }
//     else{
//         cout<< "this number is odd number";
//     }
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int marks;
//     cout<< "Enter the marks : ";
//     cin>>marks;
//     if(marks > 90){
//         cout<< "O";
//     }
//     else if(marks <= 90 && marks >= 80){
//        cout << "A+";
//     }
//     else if(marks <= 80 && marks >= 70){
//         cout << "A";
//     }
//     else if(marks <= 70 && marks >= 60 ){
//         cout<< "B+";
//     }
//      else if(marks <= 60 && marks >= 50 ){
//         cout<< "B";
//     }
//      else if(marks <= 50 && marks >= 40 ){
//         cout<< "C";
//     }
//      else if(marks <= 40 && marks >= 33 ){
//         cout<< "P";
//     }
//     else{
//         cout<< "Fail";
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "Enter the char: ";
//     cin >> ch;

//     if(ch >= 'a' && ch <= 'z'){
//         cout << "Lower case";
//     }
//     else if(ch >= 'A' && ch <= 'Z'){
//         cout << "Upper case";
//     }
//     else{
//         cout << "Enter a valid alphabet";
//     }

//     return 0;
// }

// ASCII (American Standard Code for Information Interchange)
// a to z (97 to 122)
// A to Z (65 to 90)


// leap year or not
// #include<iostream>
// using namespace std;

// int main(){
//     int year;
//     cout << "Enter a year: ";
//     cin >> year;

//     if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)){
//         cout << year << " is a Leap Year";
//     }
//     else{
//         cout << year << " is not a Leap Year";
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter number of terms for Fibonacci series: ";
//     cin >> n;

//     int a = 0, b = 1, next;

//     if(n <= 0){
//         cout << "Please enter a positive number!";
//     }
//     else if(n == 1){
//         cout << "Fibonacci series: " << a;
//     }
//     else{
//         cout << "Fibonacci series: " << a << " " << b << " ";
//         for(int i = 3; i <= n; i++){
//             next = a + b;
//             cout << next << " ";
//             a = b;
//             b = next;
//         }
//     }

//     return 0;
// }

