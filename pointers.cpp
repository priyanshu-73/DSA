#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 5;
    int *p = &i;

    cout << *p << endl;
    cout << p << endl;
    cout << p + 1 << endl;
    cout << *p + 1 << endl;
}