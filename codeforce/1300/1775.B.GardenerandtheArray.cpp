// link : https://codeforces.com/problemset/problem/1775/B
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

    vector<int> mp(2 * ((ll)1e5) + 1, 0);
    vector<vector<int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int pi;
            cin >> pi;
            mp[pi]++;
            v[i].push_back(pi);
        }
    }

    for (int i = 0; i < n; i++)
    {
        bool oneFound = false;

        for (int &pi : v[i])
        {
            if (mp[pi] == 1)
            {
                oneFound = true;
                break;
            }
        }

        if (!oneFound)
        {
            cout << "YES" << endl;
            return;
        }
    }

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