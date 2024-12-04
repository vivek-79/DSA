   

#include<bits/stdc++.h>

using namespace std;

int find(int arr[],int len){

    vector<int> temp;

    int lstSmaller = arr[0];
    int largest=-1;
    int cnt=1;

    sort(arr,arr+len);

    for(int i=0;i<len;i++){

        if(arr[i] ==lstSmaller+1){
            lstSmaller=arr[i];
            cnt++;
            largest=  max(largest,cnt);
        }
        // else if(arr[i]==arr[i-1]){
        //     continue;
        // }
        else{
            lstSmaller=arr[i];
            cnt=1;
        }
    }

    return largest;
}

int main(){

    int arr [] ={100,102,100,101,4,3,2,3,2,1,1,1,2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int ans= find(arr,len);

    cout<<ans;
}