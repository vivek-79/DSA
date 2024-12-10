
#include<bits/stdc++.h>
using namespace std;


int main() {

    int t; 
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        bool found=false;
        for(int i=0;i<n;i++){

            for(int j=0;j<n;j++){

                int num= abs(a[i]-a[j]);
                if(num %k !=0){
                    cout<<"yes"<<endl;
                    cout<<j+1<<endl;
                    found=true;
                    break;
                }
            }
            if(found){
                break;
            }
        }

        if(!found){
            cout<<"No"<<endl;
        }
    
    }

    return 0;
}