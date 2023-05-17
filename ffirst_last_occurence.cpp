#include<bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr, int num){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low)/2;
    int ans = -1;
    while(low <= high){
        if(arr[mid] == num){
            ans = mid;
            high = mid - 1;
        }
        else if(arr[mid] < num){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        mid = low + (high - low)/2;
    }
    return ans;
}

int lastOcc(vector<int> arr, int num){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    int mid = low + (high - low)/2;
    int ans = -1;
    while(low <= high){
        if(arr[mid] == num){
            ans = mid;
            low = mid + 1;
        }
        else if(arr[mid] < num){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        mid = low + (high - low)/2;
    }
    return ans;
}


int main(){
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2};
    int target = 2;
    cout << firstOcc(arr, target) << " " << lastOcc(arr, target);
}