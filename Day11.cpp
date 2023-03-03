#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    if(a==0)
        return b;

    while(a!=b){
        if(a>b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}
int gcdRec(int a, int b){
    if(b == 0){
        return a;
    }
    return gcdRec(b, a % b);

}
// maths for dsa
int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}