#include<bits/stdc++.h>
using namespace std;

int maxOnes(vector<int> arr){
  int n = arr.size();
  int cnt = 0;
  int maxi = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] == 1) {
      cnt++;
    }
    else {
      cnt = 0;
    }
    maxi = max(maxi, cnt);
  }
  return maxi;
}

int main(){
  vector<int> arr = {1, 1, 1, 1, 0, 1, 1, 1};
  cout << maxOnes(arr);
}