#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n , int key){

    int s = 0, e = n - 1;
    int mid= s + (e - s) / 2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }else if (key<arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOcc(int arr[], int n , int key){

    int s = 0, e = n - 1;
    int mid= s + (e - s) / 2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else if (key<arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int even[5] = {1, 2, 3, 3, 5};

    pair<int, int> p;
    p.first = firstOcc(even,5,3);
    p.second = lastOcc(even, 5, 3);

    cout << p.first <<"\n"<< p.second << endl;
} 