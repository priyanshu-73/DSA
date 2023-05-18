#include <bits/stdc++.h>
using namespace std;

vector<int> row(int row){
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int i = 1; i < row; i++){
        ans = ans * (row - i);
        ans = ans / i;
        ansRow.push_back(ans);
    }
    return ansRow;
}

int pivotEle(vector<int>& arr){
    int n = arr.size();
    int s = 0;
    int e = n - 1;
    for(int i = 0; i < n; i++){
        int mid = s + (e - s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1; 
        }
        else{
            e = mid;
        }
    }
    return arr[e];
}


int main(){
    vector<int> arr = {7, 9, 1, 2, 3};
    cout << pivotEle(arr);
}