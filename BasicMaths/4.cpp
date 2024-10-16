

//armstrong number

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    int actual=n;
    int total =0;
    while(n!=0){
        int ld = n%10;
        total += ld*ld*ld;
        n=n/10;
    };
    if(actual==total){
        cout<<"yes";
    }
    else{
        cout<<"no";
    };
}