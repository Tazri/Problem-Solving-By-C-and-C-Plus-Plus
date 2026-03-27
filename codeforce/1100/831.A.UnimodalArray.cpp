// link : https://codeforces.com/problemset/problem/831/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define increasing 1
#define constant 2
#define decreasing 3

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int status = increasing;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] < v[i])
        {
            if (status == increasing)
                continue;

            cout << "NO" << endl;
            return;
        }

        if (v[i - 1] == v[i])
        {
            if (status == increasing)
            {
                status = constant;
                continue;
            }

            if (status == constant)
                continue;

            cout << "NO" << endl;
            return;
        }

        if (status == increasing || status == constant)
        {
            status = decreasing;
            continue;
        }

        if (status == decreasing)
            continue;

        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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