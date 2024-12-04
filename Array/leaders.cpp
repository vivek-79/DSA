

#include <bits/stdc++.h>

using namespace std;


//brute
vector <int> find1(int arr[],int len){

    vector<int> temp;

    for(int i=0;i<len;i++){

        int leader =true;
        for(int j=i+1;j<len;j++){

            if(arr[i]<arr[j]){
                leader =false;
                break;
            }
        }

        if(leader == true){
            temp.push_back(arr[i]);
        }
    }

    return temp;
}


//optimal
vector <int> find(int arr[],int len){

    vector<int> temp;
    int maxi = INT_MIN;

    for(int i=len-1;i>=0;i--){

        if(arr[i]>maxi){
            temp.push_back(arr[i]);
            maxi=max(maxi,arr[i]);
        }
    }

    return temp;
}

int main(){

    int arr [] ={10,22,12,3,0,6};
    int len = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = find(arr,len);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}