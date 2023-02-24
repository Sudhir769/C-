#include<bits/stdc++.h>
using namespace std;

// Arrays
void printArr(auto arr[], int n){
    for (int i = 0; i < n;i++)
    {
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
void swapAlternate(int arr[], int n){
    for (int i = 0; i < n;i+=2){
        if(i+1<n){
        swap(arr[i], arr[i + 1]);
        }
    }
    return;
}
int binarySearch(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }else if (key>mid)
        {
            s = mid + 1;
        }else{
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int vectorSum(vector<int> v){
    int sum = 0;
    for (int i = 0; i < v.size();i++){
        sum = sum + v.at(i);
    }
    return sum;
}

int main(){
    // declaration
    int arr[5];
    int arr2[8] {1};
    int arr4[9] = {1,2,3,4,5,6,7,8,9};
    int arr3[10] = {1,2,3,4,5,6,7,8,9,10};

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    string name[2]={"Sudhir", "Maurya"};

    // printArr(arr3, 10);
    // maxMin(arr3, 10);
    // arrSum(arr3, 10);
    // linearSearch(arr3, 10, 14);
    // reverseArray(arr3, 10);
    // swapAlternate(arr4, 9);
    // printArr(arr4, 9);
    // cout<< binarySearch(arr3, 10, 12);

}
