#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

string create(int n)
{
    string s;

    for (int i = 0; i < n / 2; i++)
        s.push_back('(');

    for (int i = 0; i < n / 2; i++)
        s.push_back(')');

    return s;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    if (k <= 4)
    {
        cout << -1 << endl;
        return;
    }

    if (n == k)
    {
        cout << -1 << endl;
        return;
    }

    int len = 4;
    string s = create(len);
    string ans;

    for (int i = 0; i < n / len; i++)
        ans += s;
    int rm = n % len;
    string left(rm / 2, '(');
    string right(rm / 2, ')');

    cout << left << ans << right << endl;
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