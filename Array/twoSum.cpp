

#include<bits/stdc++.h>
using namespace std;

//brute tc->n square
pair<int,int> find(int arr[],int len,int target){

    for(int i=0;i<len;i++){

        int sum=arr[i];
        for(int j=i+1;j<len;j++){
            sum+=arr[j];

            if(sum==target){
                return make_pair(i,j);
            }
            else{
                sum-=arr[j];
            }
        }
    }
    return make_pair(0,0);
}

//better tc->nlogn sc->n 
pair<int,int> find1(int arr[],int len,int target){

    map<int,int> hash;
    for(int i=0;i<len;i++){
        
        int num = arr[i];
        int req = target - num;

        if(hash.find(req) != hash.end()){
            return make_pair(i, hash[req]);
        }
        else{
            hash[num]=i;
        }
    }
    return make_pair(0,0);
}

//optimal can only remove space 
pair<int,int> find2(vector<int>arr,int len,int target){

    int i=0;
    int j=len-1;
    sort(arr.begin(),arr.end());
    while(i<=j){

        if(arr[i]+arr[j]==target){
            return make_pair(i,j);
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
        else if(arr[i]+arr[j]>target){
            j--;
        }
    }
    return make_pair(0,0);
}
//tc->nlogn + n

int main(){ 

    vector<int>arr = {2,6,5,8,11};

    pair<int,int> res = find2(arr,5,14);

    cout<< res.first<<" "<< res.second;
}