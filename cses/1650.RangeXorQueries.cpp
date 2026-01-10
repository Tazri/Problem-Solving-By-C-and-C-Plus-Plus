// link : https://cses.fi/problemset/task/1650
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
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] ^= v[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (v[r] ^ v[l - 1]) << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}