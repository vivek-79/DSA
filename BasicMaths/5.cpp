// all the divisors


#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

   for(int i=1;i<=i*i<=n;i++){
    if(n%i==0){
        cout<<i;
        cout<<endl;
        if(n/i !=i){
            cout<<n/i;
            cout<<endl;
        }
    };
   }
}