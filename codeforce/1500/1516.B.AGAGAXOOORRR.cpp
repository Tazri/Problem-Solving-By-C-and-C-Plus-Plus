// link : https://codeforces.com/problemset/problem/1516/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n;
    cin >> n;
    vector<int> v(n + 2);
    vector<int> suff(n + 2);
    vector<int> pre(n + 2);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        suff[i] = v[i];
        pre[i] = v[i];
    }

    bool allSame = true;

    for (int i = 2; i <= n; i++)
        if (v[i] != v[i - 1])
        {
            allSame = false;
            break;
        }

    if (allSame)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = n; i >= 1; i--)
    {
        suff[i] ^= suff[i + 1];
    }

    for (int i = 1; i <= n; i++)
    {
        pre[i] ^= pre[i - 1];
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << suff[i] << " \n"[i == n];
    // }

    for (int i = 2; i <= n; i++)
    {
        if (suff[i] == pre[i - 1])
        {
            cout << "YES" << endl;
            return;
        }
    }

    for (int i = 1; i <= n - 2; i++)
    {
        int x = pre[i];

        for (int j = i + 1; j <= n - 1; j++)
        {
            int jxr = pre[j] ^ pre[i];
            if (jxr != x)
                continue;
            if (jxr == suff[j + 1])
            {
                cout << "YES" << endl;
                return;
            }
        }
    }

    cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}