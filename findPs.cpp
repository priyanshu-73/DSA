#include <bits/stdc++.h>
using namespace std;

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
            e = mid - 1;
        }
    }
    return s;
    
}

int binarSearch(vector<int> arr, int s, int e, int target){
    int n = arr.size();
    int low = s;
    int high = e;
    for(int i = 0; i < n; i++){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return 0;
}

int findPos(vector<int> arr, int target){
    int n = arr.size();
    int pivot = pivotEle(arr);
    if(target >= arr[pivot] && target <= arr[n - 1]){
        return binarSearch(arr, pivot, n - 1, target);
    }
    else{
        return binarSearch(arr, 0, pivot - 1, target);
    }
}


int main(){
    vector<int> arr = {7, 9, 1, 2, 3};
    int target = 3;
    cout << findPos(arr, target);
}