#include<bits/stdc++.h>
using namespace std;

int largestEle(vector<int> arr){
    int n = arr.size();
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    vector<int> arr = {5, 2, 3, 4, 1};
    cout << largestEle(arr);
}