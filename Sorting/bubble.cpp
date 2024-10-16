

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={3,6,7,4,2,9};

    int size = sizeof(arr) /  sizeof(arr[0]);

    for(int i=size-1;i>=1;i--){
        int swapp=0;
        for(int j=0;j<i-1;j++){

            if(arr[j]>arr[j+1]){
                swapp++;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapp==0){
            break;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

//tc-> best-1, w/avg-> n square