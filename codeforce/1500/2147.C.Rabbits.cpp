// link: https://codeforces.com/problemset/problem/2147/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(string &s, vector<int> &index, int n)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
            cnt++;

        if (i == 0)
            continue;

        if (s[i] == '0' && s[i - 1] == '0')
        {
            return true;
        }
    }

    if (cnt % 2 == 0)
        return true;

    if (index.front() == 0 && s[0] == '0')
        return true;

    if (index.back() == n - 1 && s.back() == '0')
        return true;

    return false;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (s.size() == 1)
    {
        cout << "YES" << endl;
        return;
    }
    string sub;
    vector<int> index;

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (sub.empty())
        {
            sub.push_back(ch);
            index.push_back(i);
            continue;
        }

        if (ch == '1' && sub.back() == '1')
        {
            sub.pop_back();
            index.pop_back();
            if (!check(sub, index, n))
            {
                cout << "NO" << endl;
                return;
            }

            sub.clear();
            index.clear();
            continue;
        }
        sub.push_back(ch);
        index.push_back(i);
    }

    if (check(sub, index, n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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