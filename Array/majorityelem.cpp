

#include <bits/stdc++.h>

using namespace std;

//better
int find(int arr[], int len)
{

    map<int,int>temp;
    int elem = -1;

    for(int i=0;i<len;i++){

        temp[arr[i]]++;

        if(temp[arr[i]]>(len-1)/2){
            return arr[i];
        }
    }
    return -1;
}


//optimal ->moores voting algo

int find2(int arr[],int len){

    int cnt=0;
    int elem ;

    for(int i=0;i<len;i++){

        if(cnt==0){

            elem=arr[i];
            cnt++;
        }
        else if (arr[i] ==elem){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    int cnt1=0;

    for(int i=0;i<len;i++){

        if(arr[i]==elem){
            cnt++;
        }
        if(cnt>(len-1)/2){
            return elem;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {2, 2, 3, 3, 3, 3, 3, 1, 2, 2};
    int len = sizeof(arr) / sizeof(arr[0]);

    int ans = find(arr, len);
    cout << ans;
}