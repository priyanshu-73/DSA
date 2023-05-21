#include<bits/stdc++.h>
using namespace std;

void removeLeft(int arr[], int n, int d){
  d = d % n;
  reverse(arr, arr + d);
  reverse(arr + d, arr + n);
  reverse(arr, arr + n);
}

int main(){
  int arr[] = {1, 2, 3, 4, 5};
  int d = 3;
  int n = 5;
  removeLeft(arr, n, d);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}