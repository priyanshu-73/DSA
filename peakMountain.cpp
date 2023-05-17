#include <bits/stdc++.h>
using namespace std;

int peakMountain(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low)/2;
    while(low < high){
        if(arr[mid] < arr[mid + 1]){
            low = mid + 1;
        }
        else {
            high = mid;
        }
        mid = low + (high - low)/2;
    }
    return low;
}

int main(){
    vector<int> arr = {0, 1, 0};
    cout<<peakMountain(arr);
    return 0;
}