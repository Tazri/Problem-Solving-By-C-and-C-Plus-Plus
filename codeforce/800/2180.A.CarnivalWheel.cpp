// link : https://codeforces.com/problemset/problem/2180/A
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
    int l, a, b;
    cin >> l >> a >> b;
    int g = gcd(l, b);

    if (g == 1)
    {
        cout << l - 1 << endl;
        return;
    }

    set<int> st;

    while (!st.count(a))
    {
        st.insert(a);
        a += b;
        a %= l;
    }
    cout << *st.rbegin() << endl;
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