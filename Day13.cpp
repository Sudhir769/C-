#include <bits/stdc++.h>
using namespace std;


void ques1(){
    int f = 8;
    int s = 18;
    int *ptr = &s;
    *ptr = 9;
    cout << f << " ," << s << endl;
}
void ques2(){
    int f = 6;
    int *p = &f;
    int *q = p;
    (*q)++;
    cout << f << " ," << *q << endl;
}

// double pointer
int main (){
    // int i = 5;
    // int *ptr = &i;
    // int **ptr2= &ptr;
    // int ***ptr3 = &ptr2;

    // cout << "i = " << *ptr << endl;
    // cout << "Address of ptr " << *ptr2 << endl;
    // cout << "Address of ptr2 " << *ptr3 << endl;
    // cout << ***ptr3 << endl;
    // cout << &ptr2 << endl;
    // cout << ptr3 << endl;

    // ques1();
    ques2();
}