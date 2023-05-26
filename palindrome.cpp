#include<bits/stdc++.h>
using namespace std;

void reverse(int ch[], int n){
  int start = 0;
  int e = n - 1;
  while(start < e){
    swap(ch[start++], ch[e--]);
  }
}

bool palindrome(char ch[], int n){
  int s = 0;
  int e = n - 1;
  while(s <= e){
    if(ch[s] == ch[e]){
      return true;
    }
    return false;
  }
}

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
    int len = length(ch);
    cout << palindrome(ch, len); 
}