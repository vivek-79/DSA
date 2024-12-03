

#include <bits/stdc++.h>
using namespace std;

void checks(int arr1[],int len1)
{
    int low=0;
    int mid=0;
    int high=len1-1;

    while(mid<=high){

        if(arr1[mid]==0){
            swap(arr1[mid],arr1[low]);
            low++;
            mid++;
        }

        else if(arr1[mid] ==2){
            swap(arr1[mid],arr1[high]);
            high--;
        }
        else{
            mid++;
        }
    }
}

int main()
{

    int arr1[] = {1,0,0,0,1,1,2,2,0,1,2,1,1};
    int arr2[] = {2,2,3,3,4,4,5,6,7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // int ans =
    checks(arr1,size1);

    for(int i=0;i<size1;i++){
        cout<<arr1[i];
    }
    
}