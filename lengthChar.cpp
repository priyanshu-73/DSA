#include<bits/stdc++.h>
using namespace std;

int length(char ch[]){
  int count = 0;
  for(int i = 0; ch[i] != '\0'; i++){
    count++;
  }
  return count;
}


int main(){
    char ch[10];
    cin >> ch;
    cout <<"the input given is: " << ch << endl;
    cout << length(ch);
    
}