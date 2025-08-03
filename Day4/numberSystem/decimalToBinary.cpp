#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int ans = 0;
    int mul = 1;
    while (n > 0)
    {
       int rem = n % 2;
       n = n / 2;
       ans = rem * mul + ans;
       mul = mul * 10;
    }
    cout<<ans;
    return 0;
}