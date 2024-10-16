//print from 1 to n by backtracking


#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    if(n<1) return;
    n--;

    print1(n);

    cout<<n+1;
}

//print from n to 1

void print2(int n,int i){
    if(n==i) return;
    i++;

    print2(n,i);
    cout<<i;
}

//sum of n numbers

int sumNum(int n){
    if(n==1) return 1;
    return n*sumNum(n-1);
}
int main(){

    int n;
    cin>>n;
    int s=sumNum(n);
    cout<<s;
}