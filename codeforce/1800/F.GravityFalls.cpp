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
    vector<vector<int>> array(n);

    int mx = 1;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        array[i] = vector<int>(k);

        for (int j = 0; j < k; j++)
            cin >> array[i][j];

        mx = max(mx, k);
    }

    vector<int> ans(mx);
    set<int> order;

    for (int i = 0; i < n; i++)
        order.insert(i);

    int j = 0;
    while (j < mx)
    {

        int mn = -1;
        for (int oi : order)
        {
            if (mn == -1)
                mn = array[oi][j];
            mn = min(mn, array[oi][j]);
        }

        vector<int> select;

        for (int oi : order)
        {
            if (array[oi][j] == mn)
                select.push_back(oi);
        }
        j++;
        while (select.size() > 1)
        {
            vector<int> left;
            for (int si : select)
            {
                        }
        }
    }
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