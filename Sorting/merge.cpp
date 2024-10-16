

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{

    int left = low;
    int right = mid + 1;

    vector<int> temp;
    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    };
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}
void mergesort(int arr[], int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;

    mergesort(arr, low, mid);
    mergesort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
int main()
{
    int arr[] = {1, 4, 5, 8, 9, 3, 5};

    int len = sizeof(arr) / sizeof(arr[0]);

    mergesort(arr, 0, len - 1);

    for (int i = 0; i < len; i++)
    {
        cout << arr[i];
    }
}

//tc-> log base 2n * n;
//sc-> n