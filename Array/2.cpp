

#include<bits/stdc++.h>
using namespace std;

//rotate by 1place left 
void find1(int arr[],int len){
    int temp=arr[0];
    for(int i=0;i<len;i++){
        swap(arr[i+1],arr[i]);
    }
    arr[len] =temp;
}
//tc-> n

  
//rotate by k places
void find2(int arr[],int len,int k){

    k=k%len;
    reverse(arr,arr+k);
    reverse(arr+k,arr+len);
    reverse(arr,arr+len);
}
//tc->2n


//move all zeroes to the end
void find3(int arr[],int len){

    for(int i=0;i<len;i++){

        if(arr[i]==0){
            for(int j=i;j<len;j++){
                if(arr[j] !=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}
//tc->n


//union of sorted array
set<int> find4(int arr1[],int arr2[],int len1,int len2){

    set<int> stt;
    for(int i=0;i<len1;i++){
        stt.insert(arr1[i]);
    }
    for(int i=0;i<len2;i++){
        stt.insert(arr2[i]);
    }

    return stt;
}
//tc->n1logn+n2logn+n1+n2 sc->n

vector<int> find5(int arr1[],int arr2[],int len1,int len2){

    int i=0;
    int j=0;
    int back=INT_MIN;
    vector<int>temp;
    while(i<len1 && j<len2){

        if(arr1[i]<=arr2[j] && back!=arr1[i]){
            temp.push_back(arr1[i]);
        }
        else if(arr1[j]<=arr2[i] && back!=arr1[j]){
            temp.push_back(arr2[j]);
        }
        i++;
        j++;
    }
    while(i<len1){
        if(arr1[i] !=back){
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while(j<len2){
        if(arr1[j] !=back){
            temp.push_back(arr1[j]);
        }
        j++;
    }
    return temp;
}
//tc->n1+n2 sc->n1+n2


//intersection of sorted array

vector<int> find6(int arr1[],int arr2[],int len1,int len2){

    vector<int> arr(len2,0);
    vector<int>temp;

    for(int i=0;i<len1;i++){

        for(int j=0;j<len2;j++){
            if(arr1[i]==arr2[j] && arr[j]==0){
                temp.push_back(arr2[j]);
                arr[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]){
                break;
            }
        }
    }
    return temp;
}
//tc->n1*n2 sc->n1

//if sorted array
vector<int> find7(int arr1[],int arr2[],int len1,int len2){

    int i=0;
    int j=0;
    vector<int>temp;
    while(i<len1 && j<len2){

        if(arr1[i]==arr2[j]){
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return temp;
}
int main(){

    int arr1[]={0,1,3,5,6,7};
    int arr2[]={0,1,3,5,6};

    int len1=6;
    int len2=5;

    vector<int> result = find7(arr1,arr2,len1,len2);

    for(auto it:result){
        cout<<it;
    }
}