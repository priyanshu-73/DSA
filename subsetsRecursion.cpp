#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<int> output, int index, vector<vector<int>>& ans){

	if (index >= arr.size()){
		ans.push_back(output);
		return;
	}

	solve(arr, output, index + 1, ans);

	int element = arr[index];
	output.push_back(element);
	solve(arr, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &arr){
	vector<int> output;
	vector<vector<int>> ans;
	int index = 0;
	solve(arr, output, index, ans);
	return ans;
}

int main(){
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> ans = subsets(arr);
    for(auto it : ans){
        for(auto ele : it){
            cout << '{' << ele << '}' << " ";
        }
    }
}