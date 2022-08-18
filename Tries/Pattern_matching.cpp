#include <string>
#include <vector>

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    int count;

    Trie() {
        this->count = 0;
        root = new TrieNode('\0');
    }
    

    bool insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            if (!root->isTerminal) {
                root->isTerminal = true;
                return true;
            } else {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        if (insertWord(root, word)) {
            this->count++;
        }
    }
	void myinsert(string word){
        if(word.size()==0)
            return;
        insertWord(word);
        myinsert(word.substr(1));
    }
    
    // my solution
    bool help(string word, TrieNode * root){
        if(root==NULL || word.size()==0){
                return 1;
        }
        int ind = word[0]-'a';
        if(root->children[ind]==NULL)
            return 0;
        else
            return help(word.substr(1),root->children[ind]);
    }
    bool search(string word) {
        return help(word,root);
    }
       bool patternMatching(vector<string> vect, string pattern) {
        // Write your code here
        Trie mytrie;
        for(auto s: vect){
            myinsert(s);
        }
     	return search(pattern);   
        
     }
};