// link : https://codeforces.com/contest/1559/problem/C
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
    int n;
    cin >> n;
    vector<int> v(n + 1);
    int one = 0;
    int zero = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (v[i] == 1)
            one++;
        else
            zero++;
    }

    if (n == 1)
    {
        if (v[1] == 0)
            cout << 1 << " " << 2 << endl;
        else
            cout << 2 << " " << 1 << endl;
        return;
    }

    if (one == 0 || zero == 0)
    {
        if (zero == n)
        {
            for (int i = 1; i <= n + 1; i++)
            {
                cout << i << " \n"[i == n + 1];
            }
            return;
        }
        cout << n + 1;
        for (int i = 1; i <= n; i++)
            cout << " " << i;
        cout << endl;
        return;
    }

    for (int i = 1; i < n; i++)
    {
        if (v[i] == 0 && v[i + 1] == 1)
        {
            for (int j = 1; j <= i; j++)
                cout << j << " ";
            cout << n + 1;

            for (int j = i + 1; j <= n; j++)
                cout << " " << j;
            cout << endl;

            return;
        }
    }

    cout << n << " " << n + 1;

    for (int i = 1; i < n; i++)
        cout << " " << i;
    cout << endl;
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