#include<bits/stdc++.h>
using namespace std;

void shiftZeroes(int arr[], int n){
  int k = 0;
  while(k < n){
    if(arr[k] == 0){ 
      break;
    }
    else {
      k = k + 1;
    }
  }

  int i = k;
  int j = k + 1;
  while (i < n && j < n)
  {
    if(arr[j] != 0){
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      i++;
    }
    j++;
  }
  
}

int main(){
  int arr[] = {0, 2, 0, 4, 5};
  int n = 5;
  shiftZeroes(arr, n);
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
}