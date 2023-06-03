#include<bits/stdc++.h>
using namespace std;

int fact(int n){

	// base case
	if(n == 0)
		return 1;

	// recursive function
	int choti = fact(n - 1);

	int badi = n * choti;
	
	return badi;
}

int main(){
	int n = 5;
	cout << fact(n);
}