#include <bits/stdc++.h>
using namespace std;

int sqrRoot(int n){
    int low = 0;
    int high = n - 1;
    for(int i = 0; i < n; i++){
        float mid = low + (high - low)/2;
        if(mid * mid == n){
            return mid;
        }
        else if(mid * mid < n){
            low = mid + 1;
        }
        else high = mid - 1;
    }
}

int main(){
    int n = 6;
    cout << sqrRoot(n);
}