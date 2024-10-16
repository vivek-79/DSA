

//map hashing

#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={1,2,3,4,5,5,16};

    int size = sizeof(arr)/sizeof(arr[0]);

    map<int,int> mpp;

    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }
    int n;
    cin>>n;
    cout<<mpp[n];
}