#include <bits/stdc++.h>
using namespace std;



int main(){
    vector<int> v;

v.push_back(8);
v.push_back(3);
v.push_back(6);
v.push_back(5);
v.push_back(7);

for(auto i:v){
    cout<<i<<" ";
}
cout << endl<<endl;

cout<<"Finding 8-> "<<binary_search(v.begin(),v.end(),8)<<endl;
cout<<"Finding 3-> "<<binary_search(v.begin(),v.end(),3)<<endl;
cout<<"Finding 6-> "<<binary_search(v.begin(),v.end(),6)<<endl;
cout<<"Finding 5-> "<<binary_search(v.begin(),v.end(),5)<<endl;
cout << "Finding 7> " << binary_search(v.begin(), v.end(), 7) << endl<< endl;
;

cout<<"lower bound-> "<<lower_bound(v.begin(),v.end(),6)-v.begin( )<<endl;
cout<<"uppper bound->"<<upper_bound(v.begin(),v.end(),4)-v.begin( )<<endl;

int a =3;
int b =5;

cout << "max -> " << max(a, b) << endl;
cout<<"min -> "<<min(a,b)<<endl;

swap(a,b);
cout<<endl<<"a-> "<<a<<endl;
cout<<"b-> "<<b<<endl<<endl;

string abcd = "abcd";
cout << "string-> "<< abcd <<endl;

reverse(abcd. begin() ,abcd.end());
cout << "string-> "<< abcd <<endl<<endl;

rotate(v.begin(),v.begin()+1,v.end());
cout<<"after rotate"<<endl<<endl;

for(auto i:v){
    cout<<i<<" ";
}
cout << endl<<endl;

sort(v.begin(), v.end());


}