#include<bits/stdc++.h>
using namespace std;

// length of strings
int getLength(char name[]){
    int count = 0;
    for (int i = 0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
void reverse(char name[], int n){
    int s = 0, e = n - 1;
    while(s<e){
        swap(name[s++], name[e--]);
    }
}
bool checkPalindrome(char name[], int n){
    int s = 0, e = n - 1;
    while(s<e){
        if(name[s] !=name[e]){
            return false;
        }else{
            s++;
            e--;
        }
    }
}
char toLower(char ch){
    if(ch >= 'A' && ch <= 'Z'){
        return ch - 'A' + 'a';
    }
    return ch;
}
char toUpper(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch - 'a' + 'A';
    }
    return ch;
}
char getmaxiOccChar(string s){
    int arr[26] = {0};

    for (int i = 0; i < s.length();i++){
        char ch = s[i];
        int number = 0;
        if(ch>='a' && ch<='z'){
            number = ch - 'a';
        }else{
            number = ch = 'a';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i <26;i++){
            if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
            }
    }
    char finalAns = 'a' + ans;
    return ans;
}
// character array and string
int main(){
    // char name[10];
    // cin >> name;
    // //  null character '\0'
    // int len = getLength(name);
    // cout << len << endl;

    // reverse(name, len);
    // cout << name<<endl;

    // if(checkPalindrome(name, len)){
    //     cout << "Palindrome" << endl;
    //     }else{
    //         cout << "Not a palindrome" << endl;
    // }
    // cout << toLower('a');
    // cout << toLower('B');
    string s;
    cin >> s;
    cout << getmaxiOccChar(s);
}