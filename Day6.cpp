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
// bubble sort
void bubbleSort(int arr[],int n){
    for (int i = 0; i < n - 1;i++){
        int flag = 0;
        for (int j = 0; j < n-1 - i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if(flag==0)
            return;
    }
}
// insertion sort
void insertionSort(int arr[], int n){
    for (int i = 1; i < n;i++){
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}


int main(){
    int arr[5] = {25, 63, 12, 4, 43};
    // selectionSort(arr,5);
    // bubbleSort(arr,5);
    insertionSort(arr, 5);
    printArr(arr, 5); 
}