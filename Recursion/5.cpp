

//fibonacci

#include<bits/stdc++.h>
using namespace std;


int fibonaci(int n){
    if(n<=1) return n;

    int last= fibonaci(n-1);
    int slast = fibonaci(n-2);
    return last+slast;
}
int main(){

    int n;
    cin>>n;
    int res=fibonaci(n);
    cout<<res;
}