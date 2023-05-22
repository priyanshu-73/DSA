#include<bits/stdc++.h>
using namespace std;

string twoSum(vector<int> arr, int target){
  sort(arr.begin(), arr.end());
  int n = arr.size();
  int i = 0;
  int j = n - 1;
  while(i < n && j >= 0){
    int sum = arr[i] + arr[j];
    if(sum == target){
      return "yes";
    }
    else if(sum < target){
      i++;
    }
    else{
      i++;
    }
  }
  return "no";
}


int main(){
  vector<int> arr = {10, 9 ,44, 6, 22, 9};
  int k = 54;
  cout << twoSum(arr, k);
}