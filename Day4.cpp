#include<bits/stdc++.h>
using namespace std;

// Arrays
void printArr(auto arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void maxMin(int arr[], int n){
    int maxi = INT_MIN;
    int mini = INT_MAX;
    for (int i = 0; i < n;i++){
        maxi = max(arr[i], maxi);
        mini = min(arr[i], mini);
    }
    cout<<"Max: "<<maxi<<" Min: "<<mini<<endl;
}
void arrSum(int arr[], int n){
    int sum = 0;
    for (int i = 0; i < n;i++){
        sum += arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
}
void linearSearch(int arr[], int n, int key){
    int flag = 0;
    for (int i = 0; i < n;i++){
        if(arr[i]==key){
            flag = 1;
        }
    }
    if(flag)
        cout << "key is present" << endl;
    else
        cout << "key is not present" << endl;
    
}
void reverseArray(int arr[], int n){
    int s = 0, e = n - 1;
    while(s<e){
        // int temp = arr[s];
        // arr[s] = arr[e];
        // arr[e] = temp;
        swap(arr[s],arr[e]);
        s++, e--;
    }
    printArr(arr, n);
}

int main(){
    // declaration
    int arr[5];
    int arr2[8] {1};
    int arr3[10] = {1,2,3,4,5,6,7,8,9,10};

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    string name[2]={"Sudhir", "Maurya"};

    // printArr(arr3, 10);
    // maxMin(arr3, 10);
    // arrSum(arr3, 10);
    // linearSearch(arr3, 10, 14);
    reverseArray(arr3, 10);
}
