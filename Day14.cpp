#include <bits/stdc++.h>
using namespace std;

void update2(int &n){
    n++;
}
void update(int n){
    n++;
}
int& func(int a){
    int &ans = a;
    return ans;
}
int* fun(int n){
    int *ptr = &n;
    return ptr;
}
int getSum(int *arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
void jaggedArray(){
// create an array of pointers with 3 rows
int** jagged = new int*[3];
// allocate memory for each row with different sizes
jagged[0] = new int[4]; // first row has 4 columns
jagged[1] = new int[2]; // second row has 2 columns
jagged[2] = new int[3]; // third row has 3 columns


}

// Reference variable 
int main (){
    // int i = 5;
    // int &j = i;
    // cout << "i = " << i << endl;
    // cout << "j = " << j << endl;
    // j++;
    // cout << "i = " << i << endl;
    // cout << "j = " << j << endl;

    // int n = 3;
    // cout << "Before update :" << n << endl;
    // update2(n);
    // cout << "After update :" << n << endl;

    // cout << func(8) << endl;
    // int n = 4;
    // cout << fun(n) << endl;
    // cout << &n << endl;

    // char cha = 'q';
    // cout << sizeof(cha) << endl;

    // char *ch = new char;
    // cout << sizeof(ch) << endl;
    // int *p = new int;

    // int *arr = new int[5];
    // delete p;

    // int n;
    // cin >> n;

    // int *arr = new int[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // cout <<"Sum :"<< getSum(arr, n) << endl;

    // Dynamic allocation of arr
    int row, col;
    cin >> row>>col;

    int **arr = new int*[row];

    for (int i = 0; i < row;i++){
        arr[i] = new int[col];
    }
    // creation done

    for (int i = 0; i < row;i++){
        for (int j = 0; j < col;j++){
            cin >> arr[i][j];
        }
    }
    // input done
    cout << endl;

    for (int i = 0; i < row;i++)
    {
        for (int j = 0; j < col;j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout << endl;
    }

    // release memory
    for (int i = 0; i < row;i++){
        delete[] arr[i];
    }
    delete[] arr;

    jaggedArray();
}