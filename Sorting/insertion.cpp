

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {2,4,6,8,9,1,3};

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++){

        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

//tc-> n square, best-> n  