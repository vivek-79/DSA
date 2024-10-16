
// reverse a num

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    long rev = 0;
    while (x != 0)
    {
        int ld = x % 10;
        x = (x / 10);
        rev = (rev * 10) + ld;

        if (rev > INT_MAX || rev < INT_MIN)
        {
            return 0;
        }
    }
    return (int)rev;
}