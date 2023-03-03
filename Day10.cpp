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
vector<int> spiralOrder(vector<vector<int>>& matrix){
    vector<int> spiral;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while(count<total){
        for (int index = startingCol; count<total && index <= endingCol;index++){
            spiral.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;
        for (int index = startingRow; count<total && index<= endingRow;index++){
            spiral.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;
        for (int index = endingCol;count<total && index >= startingCol;index--){
            spiral.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;
        for (int index = endingRow;count<total && index >= startingRow;index--){
            spiral.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol++;
    }
    return spiral;
}
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while(rowIndex<row && colIndex>=0){
        if(matrix[rowIndex][colIndex] == target){
            cout << rowIndex << " " << colIndex << endl;
            return true;
        }
        if(matrix[rowIndex][colIndex] > target){
            colIndex--;
        }
        else{
            rowIndex++;
        }
    }
    return false;
}
bool searchMatrix2(vector<vector<int>>& matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start / 2);

    while(start<=end){
        int element = matrix[mid / col][mid % col];
        if(element== target){
            return 1;
        }
        else if(element > target){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start / 2);
    }
    return 0;
}

// 2D arrays
int main(){
    // twoDarray();
    // twoDarray2();
    // int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printRowSum(arr, 3, 3);
    // printColSum(arr, 3, 3);
    // largestRowSum(arr, 3, 3);

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // vector<int> spiral = spiralOrder(matrix);
    // for (int i = 0; i < spiral.size(); i++){
    //     cout << spiral[i] << " ";
    // }
    // cout << endl;
    cout<<searchMatrix2(matrix, 13);
}


