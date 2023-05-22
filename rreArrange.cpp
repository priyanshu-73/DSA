#include<bits/stdc++.h>
using namespace std;

vector<int> reArrange(vector<int> arr){
  int n = arr.size();
  vector<int> ans(n, 0);
  int pos = 0;
  int neg = 1;
  for(int i = 0; i < n; i++){
    if(arr[i] < 0){
      ans[neg] = arr[i];
      neg += 2;
    }
    else{
      ans[pos] = arr[i];
      pos += 2;
    }
  }
  return ans;
}

int main(){
  vector<int> arr = {1,2,-4,-5}; 
  int n = arr.size(); 
  vector<int> ans = reArrange(arr);
  for(auto it : ans){
    cout << it << " ";
  }
  cout << endl;
}