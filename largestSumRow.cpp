#include<bits/stdc++.h>
using namespace std;

int sumRows(vector<vector<int>> arr){
    vector<int> ans;
    int maxi = INT_MIN;
    int row = -1;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int j = 0; j < arr[i].size(); j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            row = i;
        }
    }
    cout << row << endl;
    return maxi;
    
}

int main(){
  vector<vector<int>> arr = {{1, 2, 3}, {7, 8, 9}, {4, 5, 6}};
  cout << sumRows(arr);
  
}