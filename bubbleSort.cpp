#include<bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> arr){
    int n = arr.size();
    for(int i = 1; i < n; i++){
        bool swapped = false;
        for(int j = 0; j < n - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
    
    return arr;
}

int main(){
    vector<int> arr = {1, 3, 2, 0};
    vector<int> ans = bubbleSort(arr);
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;
}