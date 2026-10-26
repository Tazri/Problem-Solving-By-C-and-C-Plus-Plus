// link : https://codeforces.com/problemset/problem/665/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

char take(char a, char b)
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (i != a && i != b)
            return i;
    }
    return '0';
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    int n = s.size();

    string ans = "";
    string sub = "";
    sub.push_back(s[0]);

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            sub.push_back(s[i]);
            continue;
        }

        char ch = take(s[i], s[i - 1]);

        for (int j = 1; j < sub.size(); j += 2)
        {
            sub[j] = ch;
        }
        ans += sub;
        sub.clear();
        sub.push_back(s[i]);
    }

    char ch = take(sub.back(), sub.back());
    for (int j = 1; j < sub.size(); j += 2)
    {
        sub[j] = ch;
    }
    ans += sub;

    cout << ans << endl;
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