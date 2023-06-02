#include <bits/stdc++.h> 
using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	for(int i = 0; i < n; i++){
		int front = i + 1;
		int back = n - 1;
		while(front < back){
			if(arr[i] + arr[front] + arr[back] == K){
				ans.push_back({arr[i], arr[front], arr[back]});
				front++;
				back--;
			}
			else if(arr[i] + arr[front] + arr[back] > K){
				back--;
			}
			else{
				front++;
			}
		}
	}
	sort(ans.begin(), ans.end());
	ans.erase(unique(ans.begin(), ans.end()), ans.end());
	return ans;
}
 
int main(){
    vector<int> arr = {1, 1, 2, 2, 1, 1};
    int target = 4;
    vector<vector<int>> ans = findTriplets(arr, arr.size(), target);
    for(auto it : ans){
        for(auto ele : it){
            cout << ele << " ";
        }
    }
}