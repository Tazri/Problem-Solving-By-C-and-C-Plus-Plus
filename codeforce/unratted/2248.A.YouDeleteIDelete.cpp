// link : https://codeforces.com/contest/2248/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    int n = s.size();

    bool one = true;
    bool zero = true;

    for (char ch : s)
    {
        if (ch == '0')
        {
            if (zero)
                zero = false;
            else
                cout << ch;
        }
        else
        {
            if (one)
                one = false;
            else
                cout << ch;
        }
    }
    cout << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}