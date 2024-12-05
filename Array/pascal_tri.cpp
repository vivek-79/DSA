#include <bits/stdc++.h>
using namespace std;

// 1->given r and c tell me element

/* formula = (r-1)!/(c-1)!*(r-c)! */

int find1(int col, int row)
{

    int ans = 1;

    for (int i = 1; i < col; i++)
    {
        ans = ans * (row - i);
        ans = ans / (i);
    }
    return ans;
}

// 2-> find col of given row

vector<int> find2(int row)
{

    vector<int>temp;

    int ans = 1;
    temp.push_back(ans);
    for (int i = 1; i < row; i++)
    {
        ans = ans * (row - i);
        ans = ans / (i);
        temp.push_back(ans);
    }
    return temp;
}

  
int main()
{

    int r;
    int c;
    cin >> r;

    vector<vector<int>> temp;
    // int ans1 = find1(c, r);
    // cout<<ans1;

//to find whole triangle
    for(int i=1;i<=r;i++){
        temp.push_back(find2(r));
    };
    //return temp;
}