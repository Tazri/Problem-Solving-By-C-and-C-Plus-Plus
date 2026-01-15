// link : https://codeforces.com/problemset/problem/1492/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    vector<int> mxv(n);
    for (int i = 0; i < n; i++)
    {
        mxv[i] = v[i];
        if (i != 0)
            mxv[i] = max(mxv[i], mxv[i - 1]);
    }

    vector<int> ans;
    ans.reserve(n);
    stack<int> stk;
    for (int i = n - 1; i >= 0; i--)
    {
        stk.push(v[i]);

        if (v[i] != mxv[i])
            continue;

        while (stk.size())
        {
            ans.push_back(stk.top());
            stk.pop();
        }
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}