// agar function kuch return nhi karta to ham usko void dete hai.

// create simple function.

// #include<iostream>
// using namespace std;
// void sayHello(){
//     cout<<"Hello";
// }
// int main(){
//     sayHello();
//     return 0;
// }

// how to pass parameter in function

// #include<iostream>
// using namespace std;
// int sum(int a, int b){ // parameters
//     return a + b;
// }
// int minimum(int a, int b){
//    if(a > b){
//     return b;
//    }
//    else {
//     return a;
//    }
// }
// int main(){
//    cout<< sum(4,5)<<endl; // arguments
//    cout<<minimum(4,1);
//     return 0;
// }

// ques1:- sum of n number using function

// #include<iostream>
// using namespace std;
// int sumN(int n){
// int sum = 0;    
// for(int i = 1; i <= n; i++){
// sum+=i;
// }
// return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     cout<<sumN(n);
//     return 0;
// }

// ques 2:- factorial of n number using function
// #include<iostream>
// using namespace std;
// int factN(int n){
// int fact = 1;
// for(int i = 1; i <= n; i++){
//      fact = fact * i;
// }
// return fact;
// }
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     cout<<factN(n);
//     return 0;
// }

//  Note: * Functions are stored in the call stack as stack frames.
//        * Variables initialized inside functions are also stored in stack frames.
//        * The call stack follows the LIFO (Last In, First Out) behavior.

// ques:- sum of digits a number.

// #include<iostream>
// using namespace std;
// int sumD(int n){
// int total = 0;
// while (n > 0)
// {
//    int rem = n % 10;
//    n = n / 10;
//    total += rem;
// }
// return total;
// }
// int main(){
//     int n;
//     cout<<"Enter the number of digits : ";
//     cin>>n;
//     cout<<sumD(n);
//     return 0;
// }

