#include<bits/stdc++.h>
using namespace std;

void printDuplicates(string input){
	sort(input.begin(), input.end());
	int n = input.length();
	for(int i = 0; i < n - 1; i++){
		int count = 1;
		while(i < n - 1 && input[i] == input[i + 1]){
			count++;
			i++;
		}
		if(count > 1){
			cout << input[i] << " count: " << count << endl;
		}
	}
}

int main(){
    string input = "GEEKSFORGEEKS";
    printDuplicates(input);
    return 0;
}