#include <bits/stdc++.h>
using namespace std;

//  Tries 1

struct Node {
    Node* links[26];
    int cntEndWith=0;
    int cntPrefix=0;

    Node* get(char ch){
        return links[ch -'a'];
    }

    bool containskey(char ch){
        return links[ch - 'a']!=NULL;
    }

    void put(char ch, Node* node){
        links[ch - 'a'] = node;
    }

    void increseEnd(){
        cntEndWith++;
    }

    void incresePrefix(){
        cntPrefix++;
    }

    void deleteEnd(){
        cntEndWith--;
    }

    void reducePrefix(){
        cntPrefix--;
    }
    
    int getEnd(){
        return cntEndWith;
    }

    int getPrefix(){
        return cntPrefix;
    }

};


class Trie{
    private: Node* root;
    public:

    Trie(){
        root = new Node();
        
    }

    void insert(string word){
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(!node->containskey(word[i])){
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
            node->incresePrefix();
        }
        node->increseEnd();  
    }

    int countWordsEqualTo(string word){
        Node* node = root;
        for(int i=0;i<word.size();i++){
            if(node->containskey(word[i])){
                node = node->get(word[i]);
            }else{
                return 0;
            }
        }
        return node->getEnd();
    }

    int countWordsStartingWith(string word){
        Node* node = root;
        for(int i = 0; i<word.length();i++){
            if(node->containskey(word[i])){
                node = node->get(word[i]);
            }else{
                return 0;
            }
        }
        return node->getPrefix();
    }

    void erase(string word){
        Node* node = root;
        for(int i=0;i<word.length();i++){
            if(node->containskey(word[i])){
                node = node->get(word[i]);
                node->reducePrefix();
            }else{
                return;
            }
        }
        node->deleteEnd();
    }
};


int main(){
    Trie trie;
    
    string word1 = "hello";
    string word2 = "world";
    string word3 = "coding";

    trie.insert(word1);
    trie.insert(word2);
    trie.insert(word3);

    cout << trie.countWordsEqualTo(word1) << endl; // Output: 1
    cout << trie.countWordsEqualTo(word2) << endl; // Output: 1
    cout << trie.countWordsEqualTo(word3) << endl; // Output: 1
    
    // Count words starting with a given prefix
    cout << trie.countWordsStartingWith("hel") << endl; // Output: 1
    cout << trie.countWordsStartingWith("wor") << endl; // Output: 1
    cout << trie.countWordsStartingWith("cod") << endl; // Output: 1
    cout << trie.countWordsStartingWith("pro") << endl; // Output: 0
    
    // Erase a word
    trie.erase(word1);
    cout << trie.countWordsEqualTo(word1) << endl; // Output: 0
    


}
