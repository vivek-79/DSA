

#include <bits/stdc++.h>
using namespace std;

// largest elem in an array
int find1(int arr[], int len)
{
    int maxi = INT_MIN;
    for (int i = 0; i <= len; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
// tc-> n

// 2nd largest element
int find2(int arr[], int len)
{

    int lar = arr[0];
    int slar = INT_MIN;

    for (int i = 0; i <= len; i++)
    {
        if (arr[i] > lar)
        {

            slar = lar;
            lar = arr[i];
        }
        else if (arr[i] < lar && arr[i] > slar)
        {
            slar = arr[i];
        }
    }
    return slar;
}
// tc->n

// check if array sorted
int find3(int arr[], int len)
{
    for (int i = len; i >= 1; i--)
    {

        if (arr[i] < arr[i - 1])
        {
            return 0;
        }
    }
    return 1;
}
// tc->n

// remove duplicate from sorted array
void find4(int arr[], int len)
{
    int ind = 0;
    for (int i = 0; i < len; i++)
    {

        if (arr[i] != arr[i + 1])
        {
            arr[ind++] = arr[i];
        }
    };
    arr[ind++] = arr[len];
    len = ind;
}
// tc->n

int main()

{

    int arr[] = {1, 2, 3, 44, 3, 17, 4, 5, 6, 6, 7};
    int len = sizeof(arr) / sizeof(arr[0]) - 1;

    int maxi = find2(arr, len);

    cout << maxi;
    // for(int i=0;i<len;i++){
    //     cout<<arr[i];
    // }
}