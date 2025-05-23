

#include <bits/stdc++.h>
using namespace std;


// N to 1
int fibo(int n)
{

    if(n<=1) return n;

    int last = fibo(n-1);
    int slast = fibo(n-2);

    return last + slast;
};


int main()
{

    int n;
    cin>>n;
    
    int ans = fibo(n);

    cout << ans;
    
}