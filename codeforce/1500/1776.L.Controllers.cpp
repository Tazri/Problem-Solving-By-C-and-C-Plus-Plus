// link : https://codeforces.com/problemset/problem/1776/L
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool solve(int plus, int minus, int x, int y)
{
    if (x == y)
    {
        if (plus == minus)
            return true;
        return false;
    }

    if (plus == 0 || minus == 0)
        return false;

    int l = 0;
    int r = plus;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int score = mid * x;
        int left = plus - mid;
        score += (left * y);
        score -= (minus * y);

        if (score >= 0)
        {
            ans = score;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return ans == 0;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int plus = 0, minus = 0;
    for (char ch : s)
        if (ch == '-')
            minus++;
        else
            plus++;

    int q;
    cin >> q;

    for (int qi = 1; qi <= q; qi++)
    {
        int x, y;
        cin >> x >> y;
        int mn = min(x, y);
        int mx = max(x, y);
        if (solve(plus, minus, x, y) || solve(plus, minus, y, x) || solve(minus, plus, x, y) || solve(minus, plus, y, x))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
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