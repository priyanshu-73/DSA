#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> arr, int k, int mid){
    int painter = 1;
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(sum + arr[i] <= mid){
            sum += arr[i];
        }
        else{
            painter++;
            if(painter > k || arr[i] > mid){
                return false;
            }
            sum = arr[i];
        }
    }
    return true;
}

int painters(vector<int> arr, int k){
    int n = arr.size();
    int s = 0;
    int sum = 0;
    int ans = -1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    int e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e){
        if(isPossible(arr, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    vector<int> arr = {5, 5, 5, 5};
    int k = 2;
    cout << painters(arr, k); 
}