// link : https://codeforces.com/problemset/problem/2190/B1
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
    string s;
    cin >> s;

    s = "0" + s;

    vector<int> pre(n + 1);
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '(')
            pre[i]++;

        pre[i] += pre[i - 1];
    }

    // for(int i =1;i<= n;i++)
    //   cout << pre[i] << " \n"[i == n];

    for (int i = 2; i <= n; i++)
    {
        if (s[i] == '(' && s[i - 1] == ')')
        {
            int cnt = pre.back() - pre[i - 1];

            if (cnt > 1)
            {
                cout << n - 2 << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    return 0;
}
