#include<iostream>
using namespace std;

class stack{
    public:
    int size;
    int top;
    int *arr;

    stack(int size){
        this -> size = size;
        top = -1;
        arr = new int(size);
    }

    void push(int ele){
        if(size - top > 1){
            top++;
            arr[top] = ele;
        }
        else{
            cout << "stack overflow" << endl;
        }
    }

    void pop(){
        if(size - top < 1){
            cout << "stack underflow" << endl;
        }
        else{
            top--;
        }
    }

    int peak(){
        if(top >= 0 && top < size){
            return arr[top];
        }
        else{
            cout << "stack is empty" << endl;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    stack s(5);
    s.push(5);
    s.push(7);
    s.push(8);
    cout << s.peak() << endl;
}