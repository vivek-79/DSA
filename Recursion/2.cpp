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

//1 to n by backtracking

void print3(int n){

    if(n==0) return;
     n--;
    print3(n);
    cout<<n+1<<endl;
}


//n to 1 by backtracking

void print4(int i ,int n){

    if(i>n) return;
    i++;
    print4(i,n);
    cout<<i-1<<endl;
}


//sum of n numbers

int print5(int n){

    if(n<=0) return 0;

    return n+print5(n-1);

}


//factorial
int print6(int n){

    if(n<=1) return 1;
    return n*print6(n-1);
}
int main(){

    int n;
    cin>>n;
    int s =print6(n);
    cout<<s;
    return 0;
}