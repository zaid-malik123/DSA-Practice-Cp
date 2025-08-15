#include<iostream>
using namespace std;
void selectionSort(int (&arr)[6], int n){
for(int i = 0; i < n-1; i++){
    int idx = i;
    for(int j = i + 1; j < n; j++){
        if(arr[j] > arr[idx]){
            idx = j;
        }
        swap(arr[j], arr[idx]);
    }
}
}
int main(){
    int arr[6] = {10, 8, 2, 3, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for(int i = 0; i < n; i++){
        cout<< arr[i] << " ";
    }
    return 0;
}