// link : https://codeforces.com/problemset/problem/1883/G1
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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    multiset<int> mt;
    a[0] = 1;
    for (int i = 1; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int bi;
        cin >> bi;
        mt.insert(bi);
    }

    sort(a.begin(), a.end());

    for (int ai : a)
    {
        multiset<int>::iterator it = mt.upper_bound(ai);

        if (it == mt.end())
            break;

        mt.erase(it);
    }

    cout << mt.size() << endl;
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