// link : https://codeforces.com/contest/2131/problem/E
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

void _DIBBA()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    if (a.back() != b.back())
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        int c1 = a[i] ^ a[i + 1];
        int c2 = a[i] ^ b[i + 1];

        if (c1 == b[i] || c2 == b[i] || a[i] == b[i])
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
    while (t--)
        _DIBBA();
    0;
}