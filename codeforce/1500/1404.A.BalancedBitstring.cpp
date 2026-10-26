// link : https://codeforces.com/problemset/problem/1404/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool okWindows(int cnt0, int cnt1, int cntQ)
{
    int d = abs(cnt0 - cnt1);

    if (d > cntQ)
        return false;

    cntQ -= d;
    if (cntQ & 1)
        return false;
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    s = " " + s;
    int cnt0 = 0;
    int cnt1 = 0;
    int cntQ = 0;

    for (int i = 1; i <= k; i++)
    {
        if (s[i] == '0')
            cnt0++;
        else if (s[i] == '1')
            cnt1++;
        else
            cntQ++;
    }

    if (!okWindows(cnt0, cnt1, cntQ))
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i <= k; i++)
    {
        set<char> take;
        char ch;
        for (int j = i; j <= n; j += k)
        {
            if (s[j] == '?')
                continue;
            ch = s[j];
            take.insert(s[j]);
        }

        if (take.size() > 1)
        {
            cout << "NO" << endl;
            return;
        }

        if (take.size() == 0)
            continue;

        s[i] = ch;
    }

    cnt0 = 0;
    cnt1 = 0;
    cntQ = 0;
    for (int i = 1; i <= k; i++)
        if (s[i] == '0')
            cnt0++;
        else if (s[i] == '1')
            cnt1++;
        else
            cntQ++;

    if (okWindows(cnt0, cnt1, cntQ))
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