#include<bits/stdc++.h>
using namespace std;

int missing(vector<int> arr){
  int n = arr.size();
  int sum = (n * (n + 1)) / 2;
  int s = 0;
  for(int i = 0; i < n - 1; i++){
    s += arr[i];
  }
  int missing = sum - s;
  return missing;
}

int main(){
  vector<int> arr = {1, 2, 4, 5};
  cout << missing(arr);
}