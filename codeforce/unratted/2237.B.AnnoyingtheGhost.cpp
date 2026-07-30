// link : https://codeforces.com/contest/2237/problem/B
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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int fi = -1;

        for (int j = i; j < n; j++)
        {
            if (a[j] <= b[i])
            {
                fi = j;
                break;
            }
        }

        if (fi == -1)
        {
            cout << -1 << endl;
            return;
        }

        ans += fi - i;

        for (int k = fi; k > i; k--)
        {
            swap(a[k], a[k - 1]);
        }
    }

    cout << ans << endl;
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