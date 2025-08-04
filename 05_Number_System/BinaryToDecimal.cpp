#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the decimal number : ";
    cin>>n;
    int ans = 0;
    int mul = 1;
    while (n > 0)
    { 
       int rem = n % 2; 
       ans = rem * mul + ans;
       n = n / 2;
       mul = mul * 10;
    }
    cout<<ans;
    return 0;
}





// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int ans = 0;
//     int mul = 1;
//     while (n > 0){
//      int rem = n % 10;
//      n /= 10;
//      ans += rem * mul;
//      mul *= 2;
//     }
//     cout<<ans;
//     return 0;
// }