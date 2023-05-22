#include<bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m){
  int i = 0;
  int j = 0;
  vector<int> temp;
  while(i < n && j < m){
    if(arr1[i] <= arr2[j]){
      if(temp.size() == 0 || temp.back() != arr1[i]){
        temp.push_back(arr1[i]);
      }
      i++;  
    }
    else{
      if(temp.size() == 0 || temp.back() != arr2[j]){
        temp.push_back(arr2[j]);
      }
      j++; 
    }
  }

  while(i < n){
    if(temp.back() != arr1[i]){
      temp.push_back(arr1[i]);
    }
    i++;
  }
  while(j < m){
    if(temp.back() != arr2[j]){
      temp.push_back(arr2[j]);
    }
    j++;
  }
  return temp;
}

int main(){
  int arr[] = {1, 2, 3, 4, 4};
  int arr1[] = {5, 5, 6, 7};
  int n = 5;
  int m = 4;
  vector<int> ans = findUnion(arr, arr1, n, m);
  for(auto it : ans){
    cout << it << " ";
  }
  cout << endl;
}