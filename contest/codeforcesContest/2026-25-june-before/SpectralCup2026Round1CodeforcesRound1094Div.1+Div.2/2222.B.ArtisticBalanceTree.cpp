// link : https://codeforces.com/contest/2222/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<int> odd;
    vector<int> even;
    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;

        if (i & 1)
            odd.push_back(vi);
        else
            even.push_back(vi);
    }

    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    bool evenused = false;
    bool oddused = false;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;

        if (x & 1)
        {
            if (odd.size() == 0)
                continue;

            if (odd.back() >= 0)
            {
                odd.pop_back();
                oddused = true;
                continue;
            }

            if (oddused)
                continue;

            oddused = true;
            odd.pop_back();
            continue;
        }

        if (even.size() <= 0)
            continue;

        if (even.back() >= 0)
        {
            evenused = true;
            even.pop_back();
            continue;
        }

        if (evenused)
            continue;
        evenused = true;
        even.pop_back();
    }

    int sum = 0;

    for (int oi : odd)
        sum += oi;

    for (int ei : even)
        sum += ei;

    cout << sum << endl;
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