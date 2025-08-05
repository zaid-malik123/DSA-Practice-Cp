#include<iostream>
using namespace std;

int complementOfBase10(int n){
    int ans = 0;
    int mul = 1;    
    while (n){
        int rem = n % 2;
        rem = rem ^ 1; // bit flip
        ans = rem * mul + ans;
        mul = mul * 2;
        n = n / 2;
    }
    return ans;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Complement: " << complementOfBase10(n) << endl;
    return 0;
}
