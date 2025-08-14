#include<iostream>
using namespace std;
int main(){
    int arr[8] = {8, 6, 9, 10, 1, 3, 15, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 1; i < n; i++){
        for(int j = i; j > 0; j--){
            if((arr[j-1] > arr[j])){
                swap(arr[j], arr[j-1]);
            }
            else{
                break;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}