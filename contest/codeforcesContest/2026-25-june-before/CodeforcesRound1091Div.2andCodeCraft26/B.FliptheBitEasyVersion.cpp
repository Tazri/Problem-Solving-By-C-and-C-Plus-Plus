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
    int n, k;
    cin >> n >> k;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int p;
    cin >> p;
    int x = v[p];

    vector<int> alt;
    alt.push_back(0);

    alt.push_back(v[1]);

    int tr = -1;
    for (int i = 1; i <= n; i++)
    {
        if (alt.back() == v[i])
        {
            if (p == i)
                tr = alt.size() - 1;

            continue;
        }

        alt.push_back(v[i]);
        if (p == i)
            tr = alt.size() - 1;
    }

    int l = 1;
    int r = alt.size() - 1;

    while (l < tr && alt[l] == x)
        l++;

    while (r > tr && alt[r] == x)
        r--;

    int cnt = 0;
    while (l < tr && tr < r)
    {
        cnt++;
        l++;
        r--;
    }

    if (l < tr)
        while (l <= tr)
        {
            l++;
            cnt++;
        }
    if (r > tr)
        while (r >= tr)
        {
            r--;
            cnt++;
        }

    if (cnt & 1)
        cnt++;
    cout << cnt << endl;
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