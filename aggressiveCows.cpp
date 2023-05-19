#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int k, int mid){
    int n = arr.size();
    int cowCount = 1;
    int lastPos = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] - lastPos >= mid){
            cowCount++;
            if(cowCount == k){
                return true;
            }
            lastPos = arr[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> arr, int k){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int s = 0;
    int ans = -1;
    int e = arr[n - 1];
    int mid = s + (e - s) / 2;
    while (s <= e){
        if(isPossible(arr, k, mid)){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    vector<int> arr = {3, 2, 1, 4, 6};
    int k = 2;
    cout << aggressiveCows(arr, k); 
}