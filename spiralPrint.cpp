#include<bits/stdc++.h>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> matrix){
  int n = matrix.size();
  int m = matrix[0].size();
  vector<int> ans;
  int startCol = 0;
  int endCol = m - 1;
  int startRow = 0;
  int endRow = n - 1;
  int count = 0;
  int total = n*m;
  while(count < total){
    for(int i = startCol; count < total && i <= endCol; i++){
      ans.push_back(matrix[startRow][i]);
      count++;
    }
    startRow++;
    for(int i = startRow; count < total && i <= endRow; i++){
      ans.push_back(matrix[i][endCol]);
      count++;
    }
    endCol--;
    for(int i = endCol; count < total && i >= startCol; i--){
      ans.push_back(matrix[endRow][i]);
      count++;
    }
    endRow--;
    for(int i = endRow; count < total && i >= startRow; i--){
      ans.push_back(matrix[i][startCol]);
      count++;
    }
    startCol++;

  }
  return ans;
 }

int main(){
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<int> ans = spiralPrint(arr);
  for(auto it : ans){
      cout << it << " ";
    }
    cout << endl;
  }