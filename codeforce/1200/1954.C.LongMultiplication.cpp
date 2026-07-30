// link : https://codeforces.com/contest/1954/problem/C
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

void _DIBBA()
{
    string a, b;
    cin >> a;
    cin >> b;
    int n = a.size();

    int fi = n;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            continue;
        if (b[i] > a[i])
            swap(b[i], a[i]);
        fi = i + 1;
        break;
    }

    for (int i = fi; i < n; i++)
    {
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }

    cout << a << endl;
    cout << b << endl;
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