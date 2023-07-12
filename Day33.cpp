#include <bits/stdc++.h>
using namespace std;

// Tries 2

struct Node
{
    Node *links[26];
    bool flag = false;

    bool containskey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }

    void put(char ch, Node *node)
    {
        links[ch - 'a'] = node;
    }

    Node *get(char ch)
    {
        return links[ch - 'a'];
    }
    void setEnd()
    {
        flag = true;
    }
    bool isEnd()
    {
        return flag;
    }
};

class Trie
{
public:
    Node *root;

public:
    Trie()
    {
        root = new Node();
    }

public:
    void insert(string word)
    {
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (!node->containskey(word[i]))
            {
                node->put(word[i], new Node);
            }
            node = node->get(word[i]);
        }
        node->setEnd();
    }

public:
    bool checkIfPrefixExist(string word)
    {
        bool fl = true;
        Node *node = root;
        for (int i = 0; i < word.length(); i++)
        {
            if (node->containskey(word[i]))
            {
                node = node->get(word[i]);
                fl = fl & node->isEnd();
            }
            else
            {
                return false;
            }
        }
        return fl;
    }
};

string completeString(int n, vector<string> &a)
{
    Trie trie;
    for (auto &it : a)
    {
        trie.insert(it);
    }

    string longest = "";
    for (auto it : a)
    {
        if (trie.checkIfPrefixExist(it))
        {
            if (it.length() > longest.length())
            {
                longest = it;
            }
            else if (it.length() == longest.length() && it < longest)
            {
                longest = it;
            }
        }
    }
    if (longest == "")
    {
        return "None";
    }
    else
    {
        return longest;
    }
}


int main(){
    int n;
    cin >> n;
    string str;

    vector<string> s;
    // cout << s.size();
    for (int i = 0; i< n;i++)
    {
        cin >> str;
        s.push_back(str);
    }

    for(auto it : s){
        cout<<it<<" ";
    }
    cout<<endl;
}