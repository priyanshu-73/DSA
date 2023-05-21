#include<bits/stdc++.h>
using namespace std;

vector<int> removeLeft(vector<int> arr){
  int n = arr.size();
  int s = 0;
  int e = n - 1;
  vector<int> ans;
  for(int i = 0; i < n - 1; i++){
    swap(arr[0], arr[e]);
    e--;
  }
  return arr;
}

int main(){
  vector<int> arr = {6, 2, 3, 4, 5};
  vector<int> ans = removeLeft(arr);
  for(auto it : ans){
    cout << it << " ";
  }
  cout << endl;
}