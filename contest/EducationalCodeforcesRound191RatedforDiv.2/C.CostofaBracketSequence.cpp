#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int fcnt(string s, string mp)
{
    int n = s.size();
    int stk = 0;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (mp[i] == '1')
            continue;

        if (s[i] == '(')
            stk++;
        else
        {
            if (stk <= 0)
                continue;

            stk--;
            cnt += 2;
        }
    }

    return cnt;
}

string ftake(string s, int k)
{
    int n = s.size();

    stack<int> stk;
    string ans(n, '0');
    int left = k;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            stk.push(i);
            continue;
        }

        if (stk.size() == 0)
            continue;

        if (left <= 0)
            break;

        int cnt = 0;
        for (int j = i; j < n; j++)
            if (s[j] == ')')
                cnt++;
            else
                break;
        if (stk.size() > cnt)
        {
            ans[i] = '1';
            left--;
            continue;
        }

        int tp = stk.top();
        stk.pop();
        ans[tp] = '1';
        left--;
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (k == 0)
    {
        string ans(n, '0');
        cout << ans << endl;
        return;
    }

    int op = 0;
    int cls = 0;

    for (char ch : s)
        if (ch == '(')
            op++;
        else
            cls++;

    int mn = min(op, cls);

    if (mn <= k)
    {
        string ans(n, '0');

        if (mn == op)
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '(')
                    ans[i] = '1';
            }
        else
            for (int i = 0; i < n; i++)
                if (s[i] == ')')
                    ans[i] = '1';

        cout << ans << endl;
        return;
    }

    string rs = s;
    reverse(rs.begin(), rs.end());

    for (int i = 0; i < n; i++)
        if (rs[i] == '(')
            rs[i] = ')';
        else
            rs[i] = '(';

    string res1 = ftake(s, k);
    string res2 = ftake(rs, k);

    if (fcnt(s, res1) < fcnt(rs, res2))
    {
        cout << res1 << endl;
    }
    else
    {
        reverse(res2.begin(), res2.end());
        cout << res2 << endl;
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