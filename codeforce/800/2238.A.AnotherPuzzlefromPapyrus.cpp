// link : https://codeforces.com/contest/2238/problem/A
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
    int n, c;
    cin >> n >> c;

    vector<int> a(n);
    vector<int> b(n);

    int suma = 0;
    int sumb = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        suma += a[i];
    }

    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        sumb += b[i];

        if (b[i] > a[i])
            ok = false;
    }

    if (ok)
    {
        cout << suma - sumb << endl;
        return;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (int i = 0; i < n; i++)
    {
        if (b[i] > a[i])
        {
            cout << -1 << endl;
            return;
        }
    }

    cout << suma - sumb + c << endl;
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