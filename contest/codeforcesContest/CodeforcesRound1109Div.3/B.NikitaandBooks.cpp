#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
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
        cin >> v[i];

    for (int i = 0; i < n - 1; i++)
    {
        int shld = i + 1;

        if (v[i] < shld)
        {
            cout << "NO" << endl;
            return;
        }

        int extra = v[i] - shld;
        v[i] -= extra;
        v[i + 1] += extra;
    }

    bool ok = true;

    for (int i = 1; i < n; i++)
    {
        if (v[i - 1] >= v[i])
        {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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