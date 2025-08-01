// while loop

// #include<iostream>
// using namespace std;
// int main(){
//     int i = 1;
//     while (i < 6)
//     {
//         cout<<  i <<endl;
//         i++;

//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<< "Enter the number: ";
//     cin>>num;
//     int i = 1;
//     while (i <= num)
//     {
//        cout<< i;
//        i++;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number: ";
//     int sum = 0;
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         if(i % 2==0){
//             sum+=i;
//         }
//         i++;
//     }
//     cout<<sum;
    
//     return 0;
// }

// for loop

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter the number : ";
//     cin>>n;
//     int sum = 0;
//     for(int i = 1; i <= n; i++){
//       sum += i;
//     }
//     cout<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     int sum = 0;
//     cin>>n;
//     for(int i = 1; i <= n; i++){
//         if( i % 2 != 0){
//            sum+=i;
//         }
//     }
//     cout<<"sum is : "<<sum;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the no : ";
//     cin>>n;
//     bool isPrime = true;
//     for(int i = 2; i < n; i++){
//         if(i % n == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime){
//         cout<<"This number is non Prime number";
//     }
//     else{
//         cout<<"This number is Prime number";
//     }
// }

// Do while loop
// NOTE: do while loop ek bar jarur chalta hai agar condition false hai tab bhi chalega ek bar;

// for ex:-

// #include<iostream>
// using namespace std;
// int main(){
//     do
//     {
//         cout<<"hello";
//     } while (3>5);
    
//     return 0;
// }

// ye condition false hone ke bad bhi chla 😂;