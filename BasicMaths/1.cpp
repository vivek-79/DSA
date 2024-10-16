//get all digit


#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    int count =0;
    while(num>0){
        count++;
        cout<<num%10,
        cout<<endl;
        num=num/10;
    }
    cout<<endl;
    cout<<"Total num is : "<<count;
}