#include <bits/stdc++.h>
using namespace std;

// if-else
void isEven(int n){
    if(n%2==0){
        cout << "even" << endl;
    }else{
        cout << "odd" << endl; 
    }
}
int factorial(int n){
    if(n<=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
bool isPrime(int n){
    if(n==2 || n==3){
        return true;
    }else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}
// while loop
void printNums(int n){
    int a = 1;
    while(a<=n){
        cout<<a<<" ";
        a++;
    }
}
void printPrimes(int n){
    int a = 2;
    while(a<=n){
        if(isPrime(a)){
            cout<<"Prime for "<<a<<endl;
        }else{
            cout<<"Not prime for "<<a<<endl;
        }
        a++;
    }
}

// for loop
int sum(int n){
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    return sum;
}
float fehrenheit(int n){
    float tempInFeh = (n*9 / 5)  + 32;
    return tempInFeh;
}
void pattern1(int n){
    for (int i = 1; i <= n;i++){
        for (int j = 1; j <= n;j++){
            cout <<j <<" ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    // isEven(n);
    // cout<<endl;

    // bool res= isPrime(n);
    // cout << res;

    // printNums(n);

    // int s = sum(n);
    // cout << s << endl;

    // int fact = factorial(n);
    // cout << fact << endl;

    // float tem = fehrenheit(n);
    // cout << tem << endl;

    // printPrimes(n);

    pattern1(n);
}
