
#include <bits/stdc++.h>

using namespace std;


int find( int arr[],int mid,int cows){

    int cnt=1;
    int last=arr[0];
    
    for(int i=0;i<6;i++){

        if(arr[i]-last>=mid){
            cnt++;
            last=arr[i];
        }
        if(cnt==cows){
            return 1;
        }
    }
    return 0;
}
int main(){

    int arr[]={0,3,4,7,9,10};
    int low=1;
    int high=arr[5];
    int cows=4;
    int ans=-1;
    while(low<=high){

        int mid=(low+high)/2;

        if(find(arr,mid,cows)){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }

    cout<<ans;
    return 0;
}