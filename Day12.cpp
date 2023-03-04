#include <bits/stdc++.h>
using namespace std;

void ArrayPointer(){
    int arr[11]={10,9,8,7,6,5,4,3,2,1,0};
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << *arr << endl;
    cout << *arr +1 << endl;
    cout << *(arr +1) << endl;
    cout << 5[arr] << endl;
    cout << *(5+arr) << endl;
}
void CharArrayPointer(){
    char arr[11]={'A','B','C','D','E','F','G','H','I','J','K'};
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    char ch[6] = "abcde";

    char *c = &ch[0];
    cout << c << endl;
    cout << *c << endl;

    char temp = 'z';
    cout << temp << endl;
    char *p = &temp;
    cout << p << endl;
    cout << *p << endl;

}
void PointerFunction(int *p){
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;
}
void update(int *p){
    *p = *p + 1;

    p += 1;
    cout << p << endl;
}
int getSum(int *arr, int n){
    cout << sizeof(arr) << endl;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

// pointers
int main(){
    // int num = 5;
    // cout << "Address of num :" << &num << endl;

    // // initialising pointer 
    // int *ptr = &num;
    // cout << "p: " << ptr << endl;
    // cout << "p: " <<*ptr << endl;
    // cout << "Address of ptr :" << &ptr << endl;

    // ArrayPointer();
    // CharArrayPointer();

    // int value = 5;
    // int *p = &value;
    // PointerFunction(p);
    // cout << p << endl;
    // cout << value << endl;
    // update(p);
    // cout << p << endl;
    // cout << value << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum :" << getSum(arr, 5);
}