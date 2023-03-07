#include<bits/stdc++.h>
using namespace std;


void sayDigit(int n){
    string arr[10] = { "Zero", "One", "Two", "Three", 
                                "Four", "Five ", "Six",
                                "Seven", "Eight", "Nine"};
    if(n==0)
        return;
    int digit = n % 10;
    n /= 10;

    sayDigit(n);
    cout<<arr[digit]<<" ";

}
bool isSorted(int arr[], int n){
    if(n==0||n==1)
        return 1;
    if(arr[0]>arr[1]){
        return 0;
    }
    return isSorted(arr+1,n-1);
}
int ArraySum(int *arr, int n){
    if(n==0)
        return 0;
    if(n==1)
        return arr[0];
    return arr[0] + ArraySum(arr + 1, n - 1);
}
int linearSearch(int *arr, int n, int key){
    if(n==0)
        return -1;
    if(arr[0]==key){
        return 1;
    }
    linearSearch(arr + 1, n - 1, key);
}
int BinarySearch(int *arr, int s, int e, int key){
    if(s>e)
        return -1;
    int mid = s + (e - s) / 2;
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        return BinarySearch(arr, mid + 1, e, key);
    }
    return BinarySearch(arr, s, mid - 1, key);

}
int main(){
    // int n;
    // cin>>n;
    // sayDigit(n);

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    int key;
    cin>>key;
    // cout<<isSorted(arr, n);
    // cout << ArraySum(arr, n);
    // cout<<linearSearch(arr, n, key);
    cout<<BinarySearch(arr, 0, n-1, key);
}