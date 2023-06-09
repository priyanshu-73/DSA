#include<bits/stdc++.h>
using namespace std;

void solve(string arr, vector<string>& ans, string output, int index){
    if(index >= arr.size()){
        ans.push_back(output);
        return;
    }

    solve(arr, ans, output, index + 1);

    int element = arr[index];
    output.push_back(element);
    solve(arr, ans, output, index + 1);
}

vector<string> subsets(string arr){

    vector<string> ans;
    string output;
    int index = 0;
    solve(arr, ans, output, index);
    return ans;
}

int main(){
    string arr = "abc";
    vector<string> ans = subsets(arr);
    for(auto it : ans){
        cout << '{' << it << '}' << " ";
    }
}