#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> arr, vector<vector<int>>& ans, int index){
    if(index >= arr.size()){
        ans.push_back(arr);
        return;
    }

    for(int j = index; j < arr.size(); j++){
        swap(arr[index], arr[j]);
        solve(arr, ans, index + 1);
    }
}

vector<vector<int>> permutation(vector<int> arr){
    int index = 0;
    vector<vector<int>> ans;
    solve(arr, ans, index);
    return ans;
}

int main(){
    vector<int> a = {1, 2, 3};
    vector<vector<int>> ans = permutation(a);
    for(auto it : ans){
        for(auto ele : it){
            cout << ele << " ";
        }
        cout << endl;
    }
}