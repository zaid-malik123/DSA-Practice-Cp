#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int ans = 0;
            while (num > 0) {
                int rem = num % 10;  
                num = num / 10;    
                ans += rem;      
            }

            num = ans; 
        }

        return num;
    }
};