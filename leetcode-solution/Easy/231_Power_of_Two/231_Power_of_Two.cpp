#include<iostream>
using namespace std;

bool checkPowOfTwo(int n){
    if(n <= 0){ 
        return false;
    }
    while (n != 1){
        if(n % 2 == 1){
            return false;
        }
        n = n / 2;
    }
    return true;
}

int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if(checkPowOfTwo(n)){
        cout << n << " is a power of 2" << endl;
    } else {
        cout << n << " is NOT a power of 2" << endl;
    }

    return 0;
}
