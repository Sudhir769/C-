#include <bits/stdc++.h>
using namespace std;

// binary & decimal conversion

void deciToBIn(int n){
    int i = 0;
    int binary[32];
    while(n > 0){
    binary[i]=n % 2;  
        n /= 2;
        i++;
    }
    for(int j = i-1; j >= 0; j--){
        cout << binary[j];
    }
    cout << endl;
}
void sameFlow(int n){
    int ans=0, digit=1;
    while(n > 0){
        digit = n % 2;
        n /= 2;
        ans += digit;
    }
    cout << ans << endl;
}
void binToDeci(int n){
    int i = 0;
    int ans = 0;
    while(n > 0){
        int bit = n %10;
        if(bit==1){
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    cout << ans << endl;
}
// reverse integer
void reverse(int n) {
        int ans=0;
        while(n>0){
            int digit= n%10;
            ans= (ans*10) + digit;
            n/=10;
        }
        cout << ans << endl;
    }


int main(){
    int n;
    cin >> n;

    // deciToBIn(n);
    // sameFlow(n);
    // binToDeci(n);
    reverse(n);
}