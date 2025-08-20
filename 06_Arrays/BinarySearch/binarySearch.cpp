// #include <iostream>
// #include <vector>
// using namespace std;
// int binarySearch(vector<int> &v, int target)
// {
//     int s = 0;
//     int e = v.size() - 1;
//     while (s <= e)
//     {
//         int mid = s + (e - s) / 2;
//         if (v[mid] == target)
//         {
//             return mid;
//         }
//         else if (v[mid] > target)
//         {
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//     }
//     return -1;
// }
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int target = 9;
//     int idx = binarySearch(v, target);
//     if (idx != -1)
//     {
//         cout << "Element found at index" << idx << endl;
//     }
//     else
//     {
//         cout << "Element not found";
//     }
// }