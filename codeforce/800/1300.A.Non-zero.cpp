// link : https://codeforces.com/contest/1300/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void _DIBBA()
{
    int n;
    cin >> n;
    int neg = 0;
    int pos = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (vi < 0)
            neg += vi;
        else if (vi > 0)
            pos += vi;
        else
        {
            ans++;
            pos++;
        }
    }

    if (pos + neg == 0)
        ans++;

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    0;
}