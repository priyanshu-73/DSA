#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> wavePrint(vector<vector<int>> arr){
  vector<vector<int>> ans;
  int n = arr.size();
  int m = arr[0].size();
  for(int col = 0; col < m; col++){
    vector<int> temp;
    if(col&1){
      for(int row = n - 1; row >= 0; row--){
        temp.push_back(arr[row][col]);
      }
    }
    else{
      for(int row = 0; row < n; row++){
        temp.push_back(arr[row][col]);
      }
    }
    ans.push_back(temp);
  }
  return ans;
}

int main(){
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<vector<int>> ans = wavePrint(arr);
  for(auto it : ans){
    for(auto ele : it){
        cout << ele << " ";
      }
      cout << endl;
    }
  }