// link : https://codeforces.com/problemset/problem/45/A
#include <bits/stdc++.h>

using namespace std;

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    string month;
    int k;
    cin >> month;
    cin >> k;
    string a[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int fi = -1;
    for (int i = 0; i < 12; i++)
    {
        if (a[i] == month)
        {
            fi = i;
            break;
        }
    }

    fi += k;
    fi %= 12;
    cout << a[fi] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}