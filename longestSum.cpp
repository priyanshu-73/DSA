#include<bits/stdc++.h>
using namespace std;

int longestSum(vector<int> arr, int k){
  int n = arr.size();
  int sum = 0;
  int maxi = 0;
  int cnt = 0;
  for(int i = 0; i < n; i++){
    if(sum + arr[i] <= k){
      sum += arr[i];
      cnt++;
    }
    else{
      cnt = 0;
    }
    maxi = max(maxi, cnt);
  }
  return maxi;
}

int main(){
  vector<int> arr = {2,3,5,8,1,9};
  int k = 18;
  cout << longestSum(arr, k);
}