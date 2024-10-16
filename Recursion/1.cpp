
//printing name n times
#include<bits/stdc++.h>
using namespace std;

void printName(int n,int i){
    i++;
    if(i>n) return;
    cout<<"vivek"<<i;
    cout<<endl;
    printName(n,i);
};
int main(){
    int n;
    cin>>n;
    printName(n,0);
}
