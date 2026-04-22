// link : https://codeforces.com/contest/1669/problem/D
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
    int r = 0;
    int b = 0;

    for (char &ch : s)
    {
        if (ch == 'B')
            b++;
        else
            r++;
    }

    if (r == 0 || b == 0)
        return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string subs = "";

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
        {
            if (subs.size() == 0)
                continue;

            if (check(subs))
            {
                subs = "";
                continue;
            }

            cout << "NO" << endl;
            return;
        }

        subs.push_back(s[i]);
    }

    if (subs.size() && check(subs) == false)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
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