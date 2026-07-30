// link : https://www.codechef.com/problems/RICHSTR
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
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;
    vector<pair<int, int>> v;
    vector<int> vl;
    multiset<pair<int, int>> mt;
    for (int i = 0; i < n; i++)
    {
        if (i <= 1)
            continue;

        int l = i - 2;
        set<char> st;
        for (int j = l; j <= i; j++)
            st.insert(s[j]);

        if (st.size() == 3)
            continue;

        mt.insert({l, i});
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;

        int len = r - l + 1;
        if (len < 3)
        {
            cout << "NO" << endl;
            continue;
        }

        multiset<pair<int, int>>::iterator it = mt.lower_bound({l, -1});

        if (it == mt.end())
        {
            cout << "NO" << endl;
            continue;
        }

        pair<int, int> p = *it;
        int li = p.first;
        int ri = p.second;

        if (l <= li && ri <= r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
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