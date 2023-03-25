#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int e){
    int mid = s+ (e-s) / 2;

    int len1 = mid - s +1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int k = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[k+i];
    }
    k = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[k+i];
    }
    // merge 2 sorted arrays
    int index1 = 0;
    int index2 = 0;

    int index = s;
    while(index1 < len1 && index2 < len2){
        if(first[index1] <= second[index2]){
            arr[index] = first[index1];
            index1++;   
        }
        else{
            arr[index] = second[index2];
            index2++;
        }
        index++;
    }
    while(index1 < len1){
        arr[index++] = first[index1++];
    }
    while(index2 < len2){
        arr[index++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, e);

    merge(arr, s, e);
}

int partition(int arr[], int s, int e){
    int pivot = arr[s];

    int count = 0;
    for(int i = s+1; i <=e; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }

    int pivotIndex = s + count;
    swap(arr[pivotIndex],arr[s]);

    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot)
            i++;
        while (arr[j]>pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
        
    }
    return pivotIndex;
}

void QuickSort(int *arr, int s, int e ){
    if(s>=e){
        return;
    }
    int index = partition(arr, s, e);
    QuickSort(arr, s, index-1);
    QuickSort(arr, index+1, e);
}

// QuickSort
// MergeSort
int main(){
    int arr[5] = {2,4,1,6,9};
    int n = 5;

    // mergeSort(arr, 0, n - 1);
    QuickSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

