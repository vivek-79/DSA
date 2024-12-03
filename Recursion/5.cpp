

//fibonacci

#include<bits/stdc++.h>
using namespace std;


 int fibonaci(int n){

    if(n<=1) return n;

    int s1 = fibonaci(n-1);
    int s2 = fibonaci(n-2);

    return s1+s2;
 }
int main(){

    int n;
    cin>>n;
    int res=fibonaci(n);
    cout<<res;
}