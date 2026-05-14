// link : https://codeforces.com/problemset/problem/2173/C
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

    vector<int> v;
    v.reserve(n);
    vector<int> ans;
    ans.reserve(n);
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (!st.count(vi))
        {
            st.insert(vi);
            v.push_back(vi);
        }
    }

    sort(v.begin(), v.end());

    vector<bool> visited(k + 1, false);

    for (int vi : v)
    {
        if (visited[vi])
            continue;
        ans.push_back(vi);
        visited[vi] = true;

        for (int i = 1; i * vi <= k; i++)
        {
            if (!st.count(i * vi))
            {
                cout << -1 << endl;
                return;
            }
            visited[i * vi] = true;
        }
    }

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
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