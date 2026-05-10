// link : https://codeforces.com/problemset/problem/1714/E
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool possible(int vi, int mx)
{
    int last = vi % 10;

    vector<int> repeat;
    set<int> st;
    while (!st.count(last))
    {
        repeat.push_back(last);
        st.insert(last);
        last += last;
        last %= 10;
    }

    mx -= vi;

    if (mx == 0)
        return true;

    int repSum = 0;

    for (int ri : repeat)
        repSum += ri;

    if (mx % repSum == 0)
        return true;

    mx %= repSum;
    for (int i = 0; i < repeat.size(); i++)
    {
        if (i != 0)
            repeat[i] += repeat[i - 1];

        if (repeat[i] == mx)
            return true;
    }

    return false;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    int mx;
    bool five = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        v[i] += (v[i] % 10);

        if (v[i] % 5 == 0)
            five = true;

        if (i == 0)
            mx = v[i];
        mx = max(mx, v[i]);
    }

    if (five)
    {
        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }

        cout << "YES" << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (possible(v[i], mx))
            continue;

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