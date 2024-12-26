#include<bits/stdc++.h>
using namespace std;


long double find(vector<int> arr,int k){

    vector <int> howMany(arr.size()-1,0);
    priority_queue<pair<long double,int>> pq;

    for(int i=0;i<(arr.size()-1);i++){
        pq.push({arr[i+1]-arr[i],i});
    };

    for(int i=1;i<=k;i++){

        auto p =pq.top();
        pq.pop();

        int secInd=p.second;
        howMany[secInd]++;

        long double iniDiff=arr[secInd+1]-arr[secInd];
        long double newDiff=iniDiff/(long double)(howMany[secInd]+1);
        pq.push({newDiff,secInd});

    }

    return pq.top().first;
}


int main(){

    vector <int > arr={1,2,3,4,5,6,7};
    int k=6;

    long double ans=find(arr,k);
    cout<<ans;
    return 0;
}