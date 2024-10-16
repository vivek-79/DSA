

//palidrom check for string

#include<bits/stdc++.h>
using namespace std;

int check(string s,int size,int i){
    if(size <= i) return 1;
    if(s[i] != s[size]){
        return 0;
    }
    return check(s,size-1,i+1);
}
int main(){

    string s="VIsIV";
    int size= s.size();

    int res = check(s,size-1,0);

    if(res==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}