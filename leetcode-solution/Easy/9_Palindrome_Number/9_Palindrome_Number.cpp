#include <iostream>
#include <climits>
using namespace std;
bool checkPalindrome(int n){
 if(n < 0){
    return false;
 }
 int ans = 0, rem;
 int num = n;
 while (num)
 {
    rem = num % 10;
    num = num / 10;
    if(ans > INT16_MAX){
        return false;
    }
    ans = ans * 10 + rem;
 }
 if(ans == n){
    return true;
 }
 else{
    return false;
 }
}
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    if (checkPalindrome(n))
    {
        cout << n << " is a palindrome number" << endl;
    }
    else
    {
        cout << n << " is NOT a palindrome number" << endl;
    }

    return 0;
}