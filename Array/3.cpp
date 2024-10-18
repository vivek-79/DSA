

#include <bits/stdc++.h>
using namespace std;

// Q1--missing number

int find1(int arr[], int len, int n)
{

    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < len; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i;
        }
    }
    return 0;
}
// tc->n square

int find2(int arr[], int len, int n)
{

    vector<int> temp(len, 0);
    for (int i = 0; i < len; i++)
    {
        temp[arr[i]] = 1;
    }
    for (int i = 1; i < n; i++)
    {
        if (temp[i] == 0)
        {
            return i;
        }
    }
}
// tc->2n, sc->n

// by sum method
int find3(int arr[], int len, int n)
{

    int sum = (n * (n + 1)) / 2;

    int arrsum = 0;
    for (int i = 0; i < len; i++)
    {
        arrsum += arr[i];
    }
    return (sum - arrsum);
}
// tc->n

// by xor
int find4(int arr[], int len, int n)
{

    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i < len; i++)
    {
        xor1 = xor1 ^ arr[i];
        xor2 = xor2 ^ i + 1;
    }
    xor2 = xor2 ^ (len + 1);
    return xor2 ^ xor1;
}
// tc->n

// Q2--most consecutie ones

int find5(int arr[], int len, int n)
{

    int freq = 0;
    int cnt = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == 1)
        {
            cnt++;
            freq = max(freq, cnt);
        }
        else
        {
            cnt = 0;
        }
    }
    return freq;
}

// Q3--number appering ones

int find6(int arr[], int len, int n)
{

    for (int i = 0; i < len; i++)
    {

        int flag = 0;
        for (int j = 0; j < len; j++)
        {

            if (arr[j] == arr[i] && j != i)
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            return arr[i];
        }
    }
    return 0;
}
// tc-n square

// by xor
int find7(int arr[], int len, int n)
{

    int xor1 = 0;
    for (int i = 0; i < len; i++)
    {

        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}
// tc->n

// Q4--longest subarray with sum k only positive

// brute
pair<int, int> find8(int arr[], int len, int k)
{
    pair<int, int> pr;
    for (int i = 0; i < len; i++)
    {
        int sum = 0;

        for (int j = i; j < len; j++)
        {
            sum += arr[j];
            if (sum == k && pr.second - pr.first < j - i)
            {
                pr.first = i;
                pr.second = j;
            }
        }
    }

    return pr;
}
// tc-> n square

// optimal
int find9(int arr[], int len, int k)
{

    int i = 0;
    int j = 0;
    int sum = 0;
    int indx = 0;
    while (j < len)
    {
        sum += arr[j];
        if (sum == k)
        {
            indx = max(indx,(j - i) + 1);
        }
        while (sum>k && i<=j)
        {
            sum=sum-arr[i];
            i++;
            if(sum==k){
                indx = max(indx,(j - i) + 1);
            }
        }
        j++;
    }
    return indx;
}

//optimal for positive and neg.
int find10(int arr[], int len, int k){

    map<long long,int>preSum;
    int maxlen=0;
    int sum =0;

    for(int i=0;i<len;i++){

        sum+=arr[i];

        if(sum==k){
            maxlen=max(len,i+1);
        }

        int rem = sum-k;

        if(preSum.find(rem) != preSum.end()){
            int len = i- preSum[rem];
            maxlen= max(maxlen,len);
        }

        if(preSum.find(sum) == preSum.end()){
            preSum[sum]=i;
        }
    }
    return maxlen;
}


int main()
{

    int arr[] = {-13, 0, 6, 15, 16, 2, 15, -12, 17, -16, 0, -3, 19, -3, 2, -9, -6};

    int res = find10(arr, 17, 15);

    cout << res;
}