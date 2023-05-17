#include<bits/stdc++.h>
using namespace std;

string zeroMatrix(vector<int> arr, int target){
    int n = arr.size();
    int low = 0;
    int high = n - 1;
    for(int i = 0; i < n; i++){
        int mid = low + (high - low) / 2;
        if(arr[mid] == target) {
            cout << "Index of the element is: " << mid << endl;
            return "Present";
        }
        else if (arr[mid] < target){
            low = mid + 1;
        }
        else high = mid - 1;
    }
    return "Not Present";
}


int main(){
    vector<int> arr = {1, 2, 3, 5};
    int target = 5;
    cout << zeroMatrix(arr, target);
}