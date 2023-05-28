#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> matrix, int target){
  int n = matrix.size();
  int m = matrix[0].size();
  int rowIndex = 0;
  int colIndex = m - 1;
  while(low < n && high >= 0){
    if(matrix[low][high] == target){
      return true;
    }
    else if(matrix[low][high] < target){
      low++;
    }
    else{
      high--;
    }
  }
  return false;
}

int main(){
  vector<vector<int>> arr = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
  int target = 22;
  cout << binarySearch(arr, target);
  }