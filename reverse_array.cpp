#include<iostream>
using namespace std;

void Reverse(int num[], int size){
    int start = 0;
    int end = size - 1 ;
    while(start<=end){
        swap(num[start], num[end]);
        start++;
        end--;
        }
    }

void printArray(int arr[], int size){
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }
    Reverse(arr, size);
    printArray(arr, size);
    
}