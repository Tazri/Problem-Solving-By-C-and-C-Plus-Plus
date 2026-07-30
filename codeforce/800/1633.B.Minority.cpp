// link : https://codeforces.com/problemset/problem/1633/B
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
    int zero = 0;
    int one = 0;
    for (char ch : s)
        if (ch == '0')
            zero++;
        else
            one++;

    if (one != zero)
        cout << min(zero, one) << endl;
    else
        cout << one - 1 << endl;
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
