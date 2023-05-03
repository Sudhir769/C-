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
void nCr(int n, int r){
    int num = factorial(n);
    int den = factorial(r)*factorial(n-r);
    cout << num/den << endl;
}
int pow(int a, int b){
    if(b==0)
        return 1;
    if(b==1)
        return a;
    return a*pow(a, b - 1);
}
void printPrimes(int a, int b){
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}
void swap(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
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

    // pattern1(n);

    // nCr(5,1);

    // cout << pow(2,10);

    // printPrimes(5, 25);

    int x = 65, y = 43;
    swap(&x, &y);
    cout << x <<" "<< y;
}

