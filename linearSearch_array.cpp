#include<iostream>
using namespace std;

int linearSearch(int num[], int size, int key){
    for (int i = 0;i<size;i++){
        if(num[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int size;
    cin>>size;

    int arr[100];
    for(int i = 0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter the number you are searching for: ";
    cin>>key;
    
    bool found = linearSearch(arr, size, key);
    if(found){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    
    
}