

//reverse an array

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int size,int i){
    if(i==size) return;

    swap(arr[i],arr[size]);
    reverse(arr,size-1,i+1);
}
int main(){

    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,6,0);
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}