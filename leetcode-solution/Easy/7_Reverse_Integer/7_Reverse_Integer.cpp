#include<iostream>
#include<climits>  
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int rem = x % 10;
            x = x / 10;
            if(ans > INT_MAX / 10 || ans < INT_MIN / 10) return 0;
            ans = ans * 10 + rem;
        }
        return ans;
    }
};
int main() {
    Solution sol;
    int x;
    cout << "Enter the number: ";
    cin >> x;

    int reversed = sol.reverse(x);
    cout << "Reversed number: " << reversed << endl;

    return 0;
}
