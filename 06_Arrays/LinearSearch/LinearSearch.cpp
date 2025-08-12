#include<iostream>
#include<vector>
using namespace std;
int linearSearch(vector <int> &v, int target){
for(int i = 0; i < v.size(); i++){
    if(v[i] == target){
        return i;
        break;
    }
}
return -1;
}
int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    int target = 3;
    int idx = linearSearch(v, target);
    if(idx != -1){
        cout<<"idx found at"<< idx<<endl;
    }
    else {
        cout<<"idx not found";
    }
    return 0;
}