

#include<bits/stdc++.h>
using namespace std;

int find (int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){

        while(arr[i]<=pivot && i<high){
            i++;
        }
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(int arr[],int low,int high){

    if(low>=high) return;
    int pivot = find(arr,low,high);

    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
}
int main(){

    int arr[]={1,2,9,4,6,3,8,7};

    int len = sizeof(arr)/ sizeof(arr[0]);

    quicksort(arr,0,len-1);

    for(int i=0;i<len;i++){
        cout<<arr[i];
    }
}

//tc-> n log n