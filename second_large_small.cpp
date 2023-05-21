#include<bits/stdc++.h>
using namespace std;

int secondSmall(vector<int> arr){
    int n = arr.size();
    int small = INT_MAX; 
    int secondSmall = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] < small){
            secondSmall = small;
            small = arr[i];
        }
        else if(arr[i] < secondSmall && arr[i] != small){
            secondSmall = arr[i];
        }
    }
    return secondSmall;
}

int secondLarge(vector<int> arr){
    int n = arr.size();
    int large = INT_MIN;
    int secondLarge = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > large){
            secondLarge = large;
            large = arr[i];
        }
        else if(arr[i] > secondLarge && arr[i] != large){
            secondLarge = arr[i];
        }
    }
    return secondLarge;
}



int main(){
    vector<int> arr = {5, 2, 3, 4, 1};
    cout << secondLarge(arr) << " " << secondSmall(arr);
}