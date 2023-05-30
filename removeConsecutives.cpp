#include<bits/stdc++.h>
using namespace std;

string removeChar(string s){
	string a = "";
	for(int i = 0; i < s.length(); i++){
		if(s[i] == s[i - 1]){
			continue;
		}
		else{
			a = a + s[i];
		}
	}
	return a;
}

int main(){
	string s = "aabaaaa";
	cout << removeChar(s);
}