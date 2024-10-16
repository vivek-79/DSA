

//check for prime number

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int count =0;
   for(int i=1;i*i<=n;i++){
    if(n%i==0){
        count++;
        if(n/i !=i){
            count ++;
        }
    };
    if(count>2){
        cout <<"Not prime";
        break;
    }
   }
    if(count<3){
    cout<<"Prime";
    }
}