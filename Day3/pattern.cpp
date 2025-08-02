 // ques 1:-   1 2 3 4
            // 1 2 3 4
            // 1 2 3 4
            // 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<< "Enter the number: ";
// cin>>n;
// for(int i = 1; i<=n; i++){
//     for(int j = 1; j <= n; j++){
//         cout<<j << " ";
//     }
//     cout<<endl;
// }

//     return 0;
// }

// ques 2:- A B C D
        //  A B C D
        //  A B C D
        //  A B C D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         char ch = 'A';
//         for(int j = 0; j < n; j++){
//             cout<<ch;
//             ch += 1; 
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ques 3:- 1 2 3
        //  4 5 6
        //  7 8 9

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter the number: ";
//     cin>>n;
//     int num = 1;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//          cout<<num;
//          num+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }      

// ques 4:- A B C
        //  D E F
        //  G H I

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<< "Enter the number: ";
//     cin>>n;
//     char ch = 'A';
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n; j++){
//           cout<<ch;
//           ch++;
//         }
//         cout<<endl;
//     }
//     return 0;
// } 

// ques 5:-
//    *
//    * *
//    * * *
//    * * * *
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout<<"*" << " ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ques 6:-
// 1
// 2 2
// 3 3 3
// 4 4 4 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < i+1; j++){
//             cout<<(i+1)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ques 7:-
// A
// B B
// C C C
// D D D D

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < (i+1); j++){
//            cout<< char(65+i)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ques 8:-
// 1 
// 1 2 
// 1 2 3
// 1 2 3 4

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//         int num = 1;
//         for(int j = 0; j < (i+1); j++){
//           cout<<num<<" ";
//           num++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// ques 9:-
// 1 
// 2 1 
// 3 2 1
// 4 3 2 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//       for(int j = (i + 1); j > 0; j--){
//         cout<<j;
//       }
//         cout<<endl;
//     }
//     return 0;
// }

// ques 10:-
// A 
// B A 
// C B A
// D C B A

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     for(int i = 0; i < n; i++){
//       for(int j = (65+i); j >= 65; j--){
//         cout<<char(j)<<" ";
//       }
//         cout<<endl;
//     }
//     return 0;
// }