#include <bits/stdc++.h>
using namespace std;

// patterns
void pattern2(int n){
    for (int row = 1; row <= n;row++){
        for (int col = 1; col <= row;col++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for (int row = 1; row <= n;row++){
        for (int col = 1; col <= row;col++){
            cout << row<< " ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    int count = 1;
    for (int row = 1; row <= n;row++){
        for (int col = 1; col <= row;col++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}
void pattern5(int n){
    for (int row = 1; row <= n;row++){
        int count = row;
        for (int col = 1; col <= row;col++){
            cout << count << " ";
            count--;
        }
        cout << endl;
    }
}
void pattern6(int n){
    string str = "ABCD";
    for (int row = 0; row <n;row++) {
        for (int col = 1; col <=n;col++){
            cout << str[row] << " ";
        }
        cout << endl;
    }
} 
void pattern7(int n){

    for (int row = 1 ; row <=n;row++) {
        for (int col = 1; col <=n;col++){
            char ch = 'A' + row - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for (int row = 1 ; row <=n;row++) {
        for (int col = 1; col <=n;col++){
            char ch = 'A' + col - 1;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern9(int n){
    for (int row = 1 ; row <=n;row++) {
        for (int col = 1; col <=n;col++){
            char ch = 'A';
            cout << ch << " ";
            ch= ch+1;
        }
        cout << endl;
    }
}
void pattern10(int n){
    for (int row = 1 ; row <=n;row++) {
        for (int col = 1; col <=n;col++){
            char ch = 'A' + row + col - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern11(int n){
    for (int row = 1 ; row <=n;row++) {
        int space = n - row;
        for (int col = 1; col <=n;col++){
            cout << " ";
        }
        for (int col = 1; col <=space;col++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern12(int n){
    if(n==0){
        return;
    }
    pattern12(n - 1);
    for (int i = 1; i <= n;i++){
        cout << i << " ";
    }
    cout << endl;
}
void pattern13(int n){
    if(n==1){
        cout << 1<<endl;
        return;
    }

    for (int i = 1; i <= n;i++){
        cout << i << " ";
    }
    cout << endl;
    pattern13(n - 1);

    for (int i = 1; i <= n;i++){
        cout << i << " ";
    }
    cout << endl;
}
void pattern14(int n){
    if(n==0){
        return;
    }
    pattern14(n - 1);
    for (int i = 0; i < n;i++){
        char st = 'A' + i;
        cout << st  << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;

    // pattern2(n);
    // pattern3(n);
    pattern4(n);
}
