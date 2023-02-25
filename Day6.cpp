#include <bits/stdc++.h>
using namespace std;

// selection sort

void printArr(auto arr[], int n){
    for (int i = 0; i < n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selectionSort(int arr[],int n){
    for (int i = 0; i < n - 1;i++){
        int minIndex = i;
        for (int j = i + 1; j < n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}



int main(){
    int arr[5] = {25, 63, 12, 4, 43};
    selectionSort(arr,5);
    printArr(arr, 5); 
}