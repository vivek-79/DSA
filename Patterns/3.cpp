
#include<bits/stdc++.h>
using namespace std;


void print3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< j <<"";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<< i;
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
            cout<<" ";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=1;k<(2*n)-(2*i);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print9(int n){
    for(int i=1;i<=2*n+1;i++){
        int stars =i;
        if(i>n) stars=2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print10(int n){
    for(int i=0;i<n;i++){

        int start;
        if(i%2 == 0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void print11(int n){
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
            cout<<k;
        }
        for(int j=2*(n-i);j>=1;j--){
            cout<<" ";
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}

void print12(int n){
    int l=1;
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<l;
            l++;
        }
        cout<<endl;
    }
}

void print13(int n){
    for(int i=1;i<=n;i++){
        char ch ='A';
        for(int j=1;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=n-i;j>=1;j--){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

void print15(int n){

    char ch='A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}

void print16(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int k=n-i;k>=1;k--){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<ch;
            if(j<i){
                ch++;
            }
            else ch --;
        }
        cout<<endl;
    }
}

void print17(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    print17(n);
}