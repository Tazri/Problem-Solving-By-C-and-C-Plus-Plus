// link : https://codeforces.com/problemset/problem/365/B
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
    vector<int> v(n);
    for (int &vi : v)
        cin >> vi;

    if (n <= 2)
    {
        cout << n << endl;
        return;
    }
    vector<int> p(n, 0);

    for (int i = 2; i < n; i++)
        p[i] = (v[i - 1] + v[i - 2] == v[i]);

    int len = 0;
    int mx = 0;

    for (int &pi : p)
        if (pi)
            len++;
        else
        {
            mx = max(mx, len);
            len = 0;
        }

    mx = max(mx, len);
    cout << mx + 2 << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}