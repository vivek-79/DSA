
//printing name n times
#include<bits/stdc++.h>
using namespace std;


void print(int i,int n){

    if(i>n) return;

    cout<<"Vivek"<<endl;
    i++;
    print(i,n);
}

int main(){
    print(0,4);
    return 0;
}