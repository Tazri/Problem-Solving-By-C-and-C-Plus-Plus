// linK : https://codeforces.com/problemset/problem/1093/B
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
    int n = s.size();
    int li = 0;
    int ri = n - 1;
    while (li <= ri)
    {
        if (s[li] != s[ri])
            return false;
        li++;
        ri--;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    string st = s;
    sort(s.begin(), s.end());

    if (!check(s))
    {
        cout << s << endl;
        return;
    }

    if (s != st)
        cout << s << endl;
    else
        cout << -1 << endl;
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