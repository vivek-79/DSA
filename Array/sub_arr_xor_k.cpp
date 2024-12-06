

#include <bits/stdc++.h>
using namespace std;


int find(vector<int> &arr,int k){

    int len = arr.size();
     map <int, int> mpp;
     mpp[0]=1;
    int cnt=0;
    int xr=0;
    for(int i=0;i<len;i++){

        xr=xr^arr[i];
        int req= xr^k;

        if(mpp.find(req) != mpp.end()){
            cnt += mpp[req];
        };
        mpp[xr]++;
    } 
    return cnt;
}


int main(){

    vector <int> arr={4,2,2,6,4};

    int ans = find(arr,6);
    cout<<ans;
}