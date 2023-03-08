#include <bits/stdc++.h>
using namespace std;

void Reverse(string& str, int s, int e){
    if(s>e)
        return;
    swap(str[s], str[e]);
    Reverse(str, s+1, e-1);
}

bool checkPalindrome(string& str, int s ,int e){
    if(s>e)
    return true;
    if(str[s]!=str[e]){
        return false;}
    else{
        return checkPalindrome(str, s+1, e-1);
    }
}
bool isPalindrome(string s) {
        string str="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) 
                str+=tolower(s[i]);
        }
        string y=str;
        reverse(str.begin(),str.end());
        int i=0;
        int j=0;
        while(i<str.size() && j<y.size()){
            if(str[i]!=y[j]){
                return false;
            }
            i++;
            j++;
        }
        return true;
    }
int main(){
    string name = "Sudhir";
    // Reverse(name, 0, name.length() - 1);
    // cout << name << endl;

    // bool isPalindrome= checkPalindrome(name, 0, name.length() - 1);
    cout << isPalindrome("!b@o7ob:") << endl;
}