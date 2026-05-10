// link : https://codeforces.com/contest/988/problem/A
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
    vector<int> ans;
    ans.push_back(0);
    set<int> st;

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;

        if (st.count(vi))
        {
            continue;
        }

        st.insert(vi);
        ans.push_back(i);
    }

    if (st.size() < k)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    for (int i = 1; i <= k; i++)
        cout << ans[i] << " \n"[i == k];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}