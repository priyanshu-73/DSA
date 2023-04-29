#include<iostream>
using namespace std;

void reverseNext(int num[], int size){
    for(int i = 0;i<size;i++){
        while(i+1<size){
            swap(num[i],num[i+1]);
            i+=2;
        }
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
    reverseNext(arr, size);
    printArray(arr, size);
    
}