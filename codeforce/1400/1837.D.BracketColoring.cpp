// link : https://codeforces.com/problemset/problem/1837/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(string &s)
{
    int stk = 0;

    for (char si : s)
    {
        if (si == '(')
        {
            stk++;
            continue;
        }

        if (!stk)
            return 0;
        stk--;
    }

    return stk == 0;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sv = s;
    reverse(sv.begin(), sv.end());

    if (check(s) || check(sv))
    {
        cout << 1 << endl;
        vector<int> ans(n, 1);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
        return;
    }

    vector<int> extra;
    vector<int> stk;
    int op = 0;
    int end = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ')')
            end++;
        else
            op++;

        if (s[i] == ')')
        {
            if (stk.size() > 0)
            {
                stk.pop_back();
                continue;
            }
            extra.push_back(i);
            continue;
        }

        stk.push_back(i);
    }

    while (stk.size() > 0)
    {
        extra.push_back(stk.back());
        stk.pop_back();
    }

    if (end != op)
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ans(n, 1);

    for (int ei : extra)
        ans[ei] = 2;

    set<int> st;

    for (int ai : ans)
        st.insert(ai);

    if (st.size() == 1)
        for (int i = 0; i < n; i++)
            ans[i] = 1;

    cout << st.size() << endl;

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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