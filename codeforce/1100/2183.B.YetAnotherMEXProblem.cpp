// link : https://codeforces.com/contest/2183/problem/B
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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<bool> st(n + 1);

    for (int vi : v)
        st[vi] = true;

    int mex = n;

    for (int i = 0; i <= n; i++)
        if (!st[i])
        {
            mex = i;
            break;
        }

    cout << min(mex, k - 1) << endl;
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