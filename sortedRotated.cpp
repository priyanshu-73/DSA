#include<bits/stdc++.h>
using namespace std;

bool sortedRotated(vector<int>& arr){
  int n = arr.size();
  int count = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] > arr[i + 1]){
      count++;
    }
  }
  if(count == 1){ 
    return true;
    }
  else{
    return false;
  }
}

int main(){
    vector<int> arr1 = {3, 4, 5, 1, 2};
    int k = 2;
    cout << sortedRotated(arr1);
}