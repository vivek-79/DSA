

// dutch national falg algo


#include <bits/stdc++.h>

using namespace std;


vector <int> find(vector<int> arr,int len){

    int low=0;
    int mid =0;
    int high = len-1;

    while(mid<=high){

        if(arr[mid] ==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] ==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return arr;
}
int main(){

    vector<int> arr ={1,2,0,2,0,1,1,0,0,2};

    vector <int > res = find(arr,10);

    for(int i=0;i<10;i++){
        cout<<res[i];
    }
}

