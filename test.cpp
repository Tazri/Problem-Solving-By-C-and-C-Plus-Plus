#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// find the length of biggest sub array that all element are equal

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    // a0 a1 a2 a3 a4

    int size = 1;

    int mx = 0;

    for (int i = 1; i < n; i++)
    {
        if (v[i] == v[i - 1])
        {
            size++;
        }
        else
        {
            mx = max(mx, size);
            size = 1;
        }
    }

    mx = max(mx, size);

    cout << mx << endl;
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