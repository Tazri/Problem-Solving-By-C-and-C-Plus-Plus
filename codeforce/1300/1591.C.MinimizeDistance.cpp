// link : https://codeforces.com/problemset/problem/1591/C
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

    int n, k;
    cin >> n >> k;

    vector<int> neg;
    vector<int> pos;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (vi < 0)
            neg.push_back(vi * -1);
        else
            pos.push_back(vi);
    }

    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end());

    // for (int ni : neg)
    //     cout << ni << " ";
    // cout << endl;

    // for (int pi : pos)
    //     cout << pi << " ";
    // cout << endl;

    int mx = max(neg.size() > 0 ? neg.back() : 0, pos.size() > 0 ? pos.back() : 0);
    // cout << "mx : " << mx << endl;
    int c1 = 0;
    int c2 = 0;

    while (neg.size() > 0)
    {
        c1 += neg.back();
        for (int i = 0; i < k && neg.size() > 0; i++)
        {
            neg.pop_back();
        }
    }
    c1 *= 2;

    while (pos.size() > 0)
    {
        c2 += pos.back();
        for (int i = 0; i < k && pos.size() > 0; i++)
        {
            pos.pop_back();
        }
    }
    c2 *= 2;

    int sum = c1 + c2;
    sum -= mx;

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