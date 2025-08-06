#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 9;

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Indexes: " << i << " and " << j << endl;
                return 0; 
            }
        }
    }

    cout << "No pair found" << endl;
    return 0;
}
