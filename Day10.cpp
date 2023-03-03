#include <bits/stdc++.h>
using namespace std;

void twoDarray(){
    int arr[3][4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}
void twoDarray2(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
}
cout << endl<< endl;
for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
            cout<<arr2[i][j]<<" ";
        }
    cout<<endl;
}
}
// row wise sum
void printRowSum(int arr[][3],int row, int col){
    for(int i=0;i<row;i++){
    int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
void printColSum(int arr[][3],int row, int col){
    for(int j=0;j<col;j++){
    int sum = 0;
        for(int i=0;i<row;i++){
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
}
void largestRowSum(int arr[][3],int row, int col){
    int maxi INT_MIN;
    int rowIndex = -1;
    for(int i=0;i<row;i++){
    int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }

    }
        cout<<"The maximun sum is :" << maxi << "\nFor the "<<rowIndex<<" row"<<endl;
}
// 2D arrays
int main(){
    // twoDarray();
    // twoDarray2();
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printRowSum(arr, 3, 3);
    // printColSum(arr, 3, 3);
    largestRowSum(arr, 3, 3);
}


