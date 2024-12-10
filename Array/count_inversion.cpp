#include <bits/stdc++.h>
using namespace std;


int find(vector<int> arr){

    int len=arr.size();
    int cnt=0;

    for(int i=0;i<len-1;i++){

        for(int j=i+1;j<len;j++){

            if(arr[i]>arr[j]){
                cnt++;
            }
        }
    }
    return cnt;
}

//merge-sort method

int merge(vector<int>&arr,int low,int mid ,int high){

    int left=low;
    int right=mid+1;
    vector<int>temp;
    int cnt=0;

    while(left<=mid && right<=high){

        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
                cnt+=(mid-left+1);
                temp.push_back(arr[right]);
                right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]= temp[i-low];
    }
    return cnt;
}

int mergesort(vector<int>&arr,int low,int high){

    int cnt=0;
    if(low>=high) return cnt;

    int mid=low+(high-low)/2;

    cnt+=mergesort(arr,low,mid);
    cnt+=mergesort(arr,mid+1,high);

    cnt+=merge(arr,low,mid,high);
    return cnt;
}

int main(){

    vector<int> arr={5,3,2,4,1};

    int len=arr.size();

    int ans=mergesort(arr,0,len-1);
    cout<<ans;
}