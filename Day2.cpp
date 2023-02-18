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

int main(){
    int n;
    cin >> n;

    pattern11(n);
}
