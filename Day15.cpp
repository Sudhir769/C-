#include<bits/stdc++.h>
using namespace std;
//  Defining Macros
#define PI 3.14
#define AREA(l, b) (l * b)  
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define DATE 11
#define INSTAGRAM FOLLOWERS
#define FOLLOWERS 138
// Multi-line Macro definition
#define ELE 1, \
            2, \
            3, 4, 5, 6
#define ELE_LIST  "Sudhir " ,"Maurya ", "King "
// GLobal Variable
int global = 100;
int global_array[DATE];
// Inline Function
inline int max(int a, int b) { return a > b ? a : b; }

// Default arguement
void PrintArray(int *arr, int n, int start=0){ 
    for(int i=start; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    // int r = 0;
    // cin>>r;

    // double area = PI * r * r;
    // cout << "Area Of Circle :" << area << endl;


// Given lengths l1 and l2
// int l1 = 10, l2 = 5, area; 
// // Find the area using macros
// area = AREA(l1, l2);
// printf("Area of rectangle" " is: %d", area);
// cout<< endl;

// cout << "Lockdown will be extended"
//     << " upto " << DATE
//     << "-MAY-2020" << endl;

    // int a, b;
    // cin>>a>>b;
    // int max = MAX(a, b);
    // cout << "Max is : " << max << endl;

// printf("Geeks for Geeks have %dK" " followers on Instagram", INSTAGRAM);

    // string arr[] = { ELE_LIST };
    // // Print elements
    // printf("Elements of Array are: ");

    // for (int i = 0; i < 3; i++) {
    //     cout << arr[i] << ' ';
    // }
    // cout << endl;

    // Inline Function
    // int a, b;
    // cin>>a>>b;
    // int maxi = max(a, b);
    // cout<<"Max is : "<<maxi<<endl;

    // int arr[] = {ELE};
    // PrintArray(arr, sizeof(arr)/sizeof(arr[0]));

    


}