#include<iostream>
using namespace std;

class trieNode{
    public:
    char data;
    trieNode* children[26];
    bool isTerminal;
    trieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class trie{
    public:
    trieNode* root;

    trie(){
        root = new trieNode('\0');
    }

    void insertUtil(trieNode* root, string word){
        if(word.length() == 0){
            root -> isTerminal = true;
            return;
        }

        int index = word[0] - 'A'; 
        trieNode* child;
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            child = new trieNode(word[0]);
            root -> children[index] = child;
        }

        insertUtil(child, word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }


    bool searchUtil(trieNode* root, string word){
        if(word.length() == 0){
            return root -> isTerminal;
        }

        trieNode* child;
        int index = word[0] - 'A';
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            return false;
        }

        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    void removeUtil(trieNode* root, string word){
        if(word.length() == 0){
            root -> isTerminal = false;
            return;
        }

        trieNode* child;
        int index = word[0] - 'A';
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            return;
        }
        removeUtil(child, word.substr(1));
    }

    void remove(string word){
        removeUtil(root, word);
    }
};


int main(){
    trie* t = new trie();
    t -> insertWord("ABCD");
    cout << "present or not: " << t -> searchWord("ABCD") << endl;
    t -> remove("ABCD");
    cout << "present or not: " << t -> searchWord("ABCD") << endl;
    return 0;
}