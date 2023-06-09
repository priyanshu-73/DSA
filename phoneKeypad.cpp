#include<bits/stdc++.h>
using namespace std;

void solve(string digit, int index, vector<string>& ans, string output, string mapping[]){
	if(index >= digit.length()){
		ans.push_back(output);
		return;
	}

	int number = digit[index] - '0';
	string value = mapping[number];
	for(int i = 0; i < value.length(); i++){
		output.push_back(value[i]);
		solve(digit, index + 1, ans, output, mapping);
		output.pop_back();
	}
}

vector<string> phoneKey(string& digit){
	int index = 0;
	vector<string> ans;
	if(digit.length() == 0){
		return ans;
	}
	string output;
	string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
	solve(digit, index, ans, output, mapping);
	return ans;
}

int main(){
    string digits = "23";
    vector<string> ans = phoneKey(digits);
    for(auto it : ans){
        cout << '{' << it << '}' << " ";
    }
}