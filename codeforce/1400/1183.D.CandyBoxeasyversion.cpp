// link : https://codeforces.com/problemset/problem/1183/D
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
    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        mp[vi]++;
    }

    vector<int> v;
    v.reserve(n);

    for (pair<int, int> p : mp)
        v.push_back(p.second);

    n = v.size();
    sort(v.rbegin(), v.rend());
    set<int> st;
    int sum = 0;
    int last;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            sum += v[i];
            last = v[i];
            st.insert(v[i]);
            continue;
        }

        if (last == 0)
            break;

        if (st.count(v[i]))
        {
            st.insert(last - 1);
            sum += last - 1;
            last = last - 1;
            continue;
        }

        st.insert(v[i]);
        sum += v[i];
        last = v[i];
    }

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