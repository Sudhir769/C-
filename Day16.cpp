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

int Pow(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    return a*Pow(a,b-1);
}
void PrintNums(int n){
    if(n==0){
        cout << "0 ";
        return;
    }
    PrintNums(n-1);
    cout << n << " ";
}
int main(){
    // int n;
    // cin >> n;
    // printFib(n);

    // int m, n;
    // cin >> m >> n;
    // cout<<Pow(m, n);

    int n;
    cin >> n;
    PrintNums(n);
    cout << endl;
}
