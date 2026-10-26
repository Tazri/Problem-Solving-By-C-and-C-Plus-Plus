// link : https://codeforces.com/contest/891/problem/A
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
    vector<int> v(n);
    int g = 0;
    bool one = false;
    int nonOne = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        g = gcd(v[i], g);

        if (v[i] == 1)
            one = true;
        else
            nonOne++;
    }

    if (g != 1)
    {
        cout << -1 << endl;
        return;
    }

    if (one)
    {
        cout << nonOne << endl;
        return;
    }

    int mn = n + n;

    for (int i = 0; i < n; i++)
    {
        int gi = 0;
        int index = -1;
        for (int j = i; j < n; j++)
        {
            gi = gcd(gi, v[j]);
            if (gi == 1)
            {
                index = j;
                break;
            }
        }
        if (gi == 1)
        {
            mn = min(mn, abs(index - i));
        }
    }

    cout << (mn + n - 1) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}