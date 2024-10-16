

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]={5,3,7,9,8,1,2};

    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i=0;i<=size-2;i++){//as we dont have to check for last element if there is only one it is obviouslle sorted

        int min=i;
        for(int j=i;j<=size-1;j++){

            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
}

//tc->n square