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
int largestSubarraySum(int arr[], int n){
    int largestSum = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n;j++){
            int subarraySum = 0;
            for (int k = i; k <= j; k++){
                subarraySum = subarraySum + arr[k];
            }
            largestSum = max(largestSum, subarraySum);
        }
    }
    return largestSum;
}
int largestSubarraySum2(int arr[], int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];

    for (int i = 1;  i <= n;i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int largestSum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++){
            int subarraySum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largestSum = max(largestSum, subarraySum);
            }
        }
    return largestSum;
}
// kadane's algorithm
int maximum_subarray_sum(int arr[], int n){
    int max_sum = 0;
    int current_sum = 0;

    for (int i = 0; i < n - 1;i++){
        current_sum = current_sum + arr[i];
        if(current_sum<0){
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}

int main(){
    // declaration
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int arr2[8] {1};
    int arr4[9] = {1,2,3,-4,5,-6,7,8,9};
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
    // cout << largestSubarraySum(arr4, 9);
    // cout << largestSubarraySum2(arr4, 9);
    cout << maximum_subarray_sum(arr, 9);
}
