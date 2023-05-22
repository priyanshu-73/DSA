#include<bits/stdc++.h>
using namespace std;

int once(vector<int> arr){
  int n = arr.size();
  int xorr = 0;
  for(int i = 0; i < n; i++){
    xorr = xorr ^ arr[i];
  }
  return xorr;
}

int main(){
  vector<int> arr = {1, 1, 11, 11, 12};
  cout << once(arr);
}