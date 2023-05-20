#include<bits/stdc++.h>
using namespace std;


long long apples(vector<int> arr, int m){
    sort(arr.begin(), arr.end());
    int n = arr.size();
    arr[n - m] = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}


int main(){
    vector<int> arr = {2, 3, 1, 5};
    int m = 2;
    cout << apples(arr, m);
}