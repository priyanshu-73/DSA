#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    ~Node(){
        int val = this -> data;
        if(this -> next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertNode(Node* &tail, int ele, int d){
    // assume the element is present in the list

    // empty list
    if(tail == NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    // non empty list
    else{
        Node* curr = tail;
        while(curr -> data != ele){
            curr = curr -> next;
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}


void del(Node* &tail, int ele){
    if(tail == NULL){
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev -> next;
        while(curr -> data != ele){
            prev = curr;
            curr = curr -> next;
        }
        if(curr == prev){
            tail = NULL;
        }
        prev -> next = curr -> next;
        if(tail == curr){
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}


void print(Node* &tail){
    Node* temp = tail;
    do{
        cout << tail -> data << " ";
        tail = tail -> next;
    }while(tail != temp);
    cout << endl;
}

int main(){
    Node* a = NULL;
    insertNode(a, 5, 9);
    print(a);
    insertNode(a, 9, 10);
    print(a);
    insertNode(a, 10, 11);
    print(a);
    insertNode(a, 9, 99);
    print(a);
    del(a, 11);
    print(a);
}