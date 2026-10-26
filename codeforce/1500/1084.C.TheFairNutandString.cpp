// link : https://codeforces.com/problemset/problem/1084/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    string input;
    cin >> input;
    string s;
    s.reserve(input.size());
    for (char ch : input)
        if (ch == 'a' || ch == 'b')
            s.push_back(ch);

    int n = s.size();
    int len = 1;
    vector<int> v;
    v.reserve(s.size());
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            len++;
        else
        {
            if (s[i - 1] == 'a')
                v.push_back(len);
            len = 1;
        }
    }

    if (s.back() == 'a')
        v.push_back(len);

    int mod = ((int)1e9) + 7;
    int ans = 0;
    int fact = 1;
    for (int vi : v)
    {
        fact = (1LL * fact * (vi + 1)) % mod;
    }

    ans = (fact - 1) % mod;
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