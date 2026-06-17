#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define int ll
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
            continue;
        v[i] += v[i - 1];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int qi;
        cin >> qi;

        int upper = lower_bound(v.begin(), v.end(), qi) - v.begin();
        upper++;
        cout << upper << endl;
    }
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