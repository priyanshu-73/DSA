#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
        if(arr[j] < arr[min]){
            min = j;
        }
    }
        swap(arr[min], arr[i]);
   }
}


int main(){
    vector<int> arr = {1, 0, 2, 1, 0};
    sort(arr);
    for(auto it : arr){
        cout << it << " ";
    }
    cout << endl;
}