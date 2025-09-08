// // find the largest and minimum number in Array

// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int ans = INT_MIN;
//     for(int i = 0; i < 5; i++){
//         if(arr[i] > ans){
//             ans = arr[i];
//         }
//     }
//     cout<<"Max elem is : " << ans << endl;
//     ans = INT_MAX;
//      for(int i = 0; i < 5; i++){
//         if(arr[i] < ans){
//             ans = arr[i];
//         }
//     }   
//     cout<<"Min elem is : " << ans;
//     return 0;
// }

// // find the value persent in an array if persent return idx or not return -1;

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 2, 4, 6, 8};
//     int x = 12;

//     for(int i = 0; i < 5; i++){
//         if(arr[i] == x){
//             cout << "Found at index: " << i;
//             return 0;
//         }
//     }

//     cout << "Not found"<<-1;
//     return 0;
// }


// // Reverse an array;
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int j = 4;
//     int i = 0;
//     while (i < j)
//     {
//       swap(arr[i], arr[j]);
//       i++;
//       j--;
//     }
//     for(int k = 0; k < 5; k++){
//         cout<<arr[k]<<" ";
//     }
//     return 0;
// }

// Second largest
// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int arr[5] = {1, 3, 5, 6, 8};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for(int i = 0; i < 5; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }
//     }
//     for(int k = 0; k < 5; k++){
//         if(smax < arr[k] && arr[k] != max){
//           smax = arr[k];
//         }
//     }
//     cout<<max<<endl;
//     cout<<smax;
//     return 0;
// }

// Second Min:-
// #include<iostream>
// #include <climits>
// using namespace std;
// int main(){
//     int arr[5] = {1, 4, 2, 8, 9};
//     int min = INT_MAX;
//     int smin = INT_MAX;
//     for(int i = 0; i < 5; i++){
//         if(arr[i] < min){
//             min = arr[i];
//         }
//     }
//     for(int j = 0; j < 5; j++){
//         if(arr[j] != min && arr[j] < smin){
//           smin = arr[j];
//         }
//     }
//     cout<<min<<endl;
//     cout<<smin;
//     return 0;
// }

// Missing Number
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1, 3, 4, 5, 6};
    
//     return 0;
// }


// find unique numbers in an array

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1, 1, 2, 3, 3, 4};
//     for (int i = 0; i < 6; i++){
//         int count = 0;
//         for(int j = 0; j < 6; j++){
//             if(arr[i] == arr[j]){
//               count++;
//             }
//         }
//         if(count == 1){
//             cout<< arr[i]<< " ";
//         }
//     }

//     return 0;
// }

// left rotation in 1 number

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//   vector <int> v = {1, 2, 3, 4, 5};
//   int first = v[0];
//   for(int i = 0; i < v.size()-1; i++){
//     v[i] = v[i + 1];
//   }
//   v[v.size()-1] = first;
//   for(int j = 0; j < v.size(); j++){
//     cout<<v[j]<<" ";
//   }  
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1, 3, 5, 6, 9, 10};
//     int target = 9;
//     for(int i = 0; i < sizeof(arr); i++){
//         if(arr[i] == target){
//             return i;
//         }
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6] = {1, 3, 5, 6, 9, 10};

//    for(int i = 0; i < 6; i++){
//         for(int j = i + 1; j < 6; j++){
//             if(arr[i] > arr[j]){
//                 swap(arr[i], arr[j]);
//             }
//         }
//     }


//     for(int i = 0; i < 6; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// Find Missing Number (1 to n series)
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 2, 4, 5, 6}; // missing = 3
//     int n = 6;  // last element of series
//     int sum = (n * (n + 1)) / 2; // formula sum of 1 to n
//     int arrSum = 0;

//     for(int i = 0; i < 5; i++){
//         arrSum += arr[i];
//     }

//     cout << "Missing number is: " << sum - arrSum;
//     return 0;
// }
