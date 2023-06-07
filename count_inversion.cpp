#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int s, int mid, int e){
	int i = s;
	int j = mid;
	int k = s;
	int count = 0;
	while(i <= mid - 1 && j <= e){
		if(arr[i] < arr[j]){
			temp[k++] = arr[i++];
		}
		else{
			temp[k++] = arr[j++];
			count = count + (mid - i);
		}
	}

	while(i <= mid - 1){
		temp[k++] = arr[i++];
	}
	while(j <= e){
		temp[k++] = arr[j++];
	}

	for(i = s; i <= e; i++){
		arr[i] = temp[i];
 	}
	return count;
}

int countInversion(int arr[], int temp[], int s, int e){
	int mid = (s + e)/2;
	int count = 0;
	if(e > s){
		count += countInversion(arr, temp, s, mid);
		count += countInversion(arr, temp, mid + 1, e);
		count += merge(arr, temp, s, mid + 1, e);
	}
	return count;
}

int main(){
	int arr[5] = {5, 3, 2, 1, 4};
	int n = 5;
	int temp[n];
	cout << countInversion(arr, temp, 0, n - 1);
}