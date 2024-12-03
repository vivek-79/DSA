

//palidrom check for string

#include<bits/stdc++.h>
using namespace std;

int check( string s,int len,int i){

    if(len<=i) return 1;

    if(s[i] != s[len]){
        return 0;
    };

    return check(s,len-1,i+1);
}
int main(){

    string s="VIsTV";
    int size= s.size();

    int res = check(s,size-1,0);

    if(res==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}