

//reverse an array

#include<bits/stdc++.h>
using namespace std;


void swapFunc(int arr[],int i,int n){

    if(n<=i) return;

    swap(arr[i],arr[n]);

    swapFunc(arr,i+1,n-1);
    
}

int main(){

    int arr[] ={1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    swapFunc(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}