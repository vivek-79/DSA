

#include <bits/stdc++.h>
using namespace std;

pair<int, int> find(vector<int> arr)
{
    int len = arr.size();
    int num;
    int missing = INT_MIN;
    int elemsum = 0;

    long long sum = (len * (len + 1)) / 2;
    for (int i = 0; i < len; i++)
    {

        int elem = arr[i];
        elemsum += arr[i];
        int cnt = 1;
        for (int j = i + 1; j < len; j++)
        {

            if (arr[j] == elem)
            {
                cnt++;
            }
            if (cnt == 2)
            {
                missing = elem;
            }
        }
    }

    int miss = sum - (elemsum - missing);

    return make_pair(missing, miss);
}

pair<int, int> find1(vector<int> arr)
{
    int len= arr.size();
    int hash[len]={0};

    int repet=-1;
    int miss=-1;
  
    for(int i=0;i<len;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<len;i++){
        if(hash[i]==0){
            miss=i;
        }
        else if(hash[i]==2){
            repet=i;
        }

        else if(repet !=-1 && miss !=-1){
            break;
        }
    }

    return make_pair(repet,miss);
}

pair<int, int> find2(vector<int> arr){

    int len= arr.size();

    long long sum1= (len*(len+1))/2;
    long long sqr1=(len*(len+1)*(2*len+1))/6;

    long long sum2=0;
    long long sqr2=0;
    for(int i=0;i<len;i++){
        sum2 +=arr[i];
        sqr2 +=arr[i]*arr[i];
    }

    long long x=sum2-sum1;
    long long y=sqr2-sqr1;
    y=y/x;
    x=(x+y)/2;
    y=y-x;

    return make_pair(x,y);
}
int main()
{

    vector<int> arr = {2, 3, 4, 5, 5, 6};

    pair<int, int> ans = find2(arr);

    cout << "missing :" << ans.second << " " << "repeat:" << ans.first;
}