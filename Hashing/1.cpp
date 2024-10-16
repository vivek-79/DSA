


#include <bits/stdc++.h>
using namespace std;

int main(){

    string s="abcdcef";

    int arr[256] ={0};

    for(int i=0;i<s.size();i++){
        
        arr[s[i]]++;
    }
    char c;
    cin>>c;
    cout<<arr[c];
}