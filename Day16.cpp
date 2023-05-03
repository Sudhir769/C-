#include <bits/stdc++.h>
using namespace std;
// Recursion

int Factorial(int n){
    if(n<=1)
        return 1;
    return n * Factorial(n - 1);
}

int Fibonacci(int n){ //0 1 1 2 3 5 8 13 21  34 55
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}
void printFib(int n){
    for (int i = 0; i <= n;i++){
        cout << Fibonacci(i) <<" ";
    }
}
void printNum(int n){
    if(n==0){
        return;
    }
    printNum(n-1);
    cout << n << endl;
}

int Pow(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    return a*Pow(a,b-1);
}
void printNums(int n){
    if(n==0){
        cout << "0 ";
        return;
    }
    printNums(n-1);
    cout << n << " ";
}

void printSum(int n, int sum=0){
    if(n==0){
        cout << sum << endl;
        return;
    }
    sum = sum + n;
    printSum(n-1,sum);
}
int printSum2(int n){
    if(n==0){
        return 0;
    }
    return n + printSum2(n - 1);
}
void reverseArray(vector<int> &v, int s, int e){
    if(s>e){
        return;
    }
    int temp = v[s];
    v[s] = v[e];
    v[e] = temp;
    reverseArray(v, ++s, --e);
}
bool checkPalindrome(string str, int s, int e){
    if(s>=e){
        return true;
    }
    if(str[s]!=str[e]){
        // cout << "Not a palindrome";
        // return;
        return false;
    }

    return checkPalindrome(str, ++s, --e);
}

void checkpalindrome2(vector<string>pal, int s){
    if(s==pal.size()){
        return;
    }
    cout<<checkPalindrome(pal[s], 0, pal[s].length() - 1)<<endl;
    checkpalindrome2(pal, ++s);
}

int main(){
    // int n;
    // cin >> n;
    // printFib(n);

    // int m, n;
    // cin >> m >> n;
    // cout<<Pow(m, n);

    // int n=0;
    // cin >> n;  
    // cout << printSum2(n) << endl;

    // vector<int> v = {65, 36, 43, 82, 49};
    // reverseArray(v, 0, v.size()-1);

    // for(int i:v){
    //     cout << i << " ";
    // }

    string str = "madam";
    // cout<<checkPalindrome(str, 0, str.length() - 1)<<endl;

    vector<string> pal = {"racecar", "level", "deified", "madam", "kayak", "deified", "rotavator"};

    checkpalindrome2(pal, 0);
}
