#include<bits/stdc++.h>
using namespace std;

vector<int> insertionSort(vector<int> arr){
  int n = arr.size();
  for(int i = 1; i < n; i++){
    int j = i - 1;
    int temp = arr[i];
    for(; j >= 0; j--){
      if(arr[j] > temp){
        arr[j + 1] = arr[j];
      }
      else{
        break;
      }
    }
    arr[j + 1] = temp;
  }
  return arr;
}

int main(){
    vector<int> arr = {6, 4, 3, 5, 2};
    vector<int> ans = insertionSort(arr);
    for(auto it : ans){
      cout << it << " ";
    }
    cout << endl;
}