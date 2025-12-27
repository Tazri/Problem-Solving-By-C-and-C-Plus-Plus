// link : https://codeforces.com/problemset/problem/1927/D
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
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> next(n + 1);
    next[n] = -1;

    for (int i = n - 1; i >= 1; i--)
        if (v[i] != v[i + 1])
            next[i] = i + 1;
        else
            next[i] = next[i + 1];

    int q;
    cin >> q;
    for (int qi = 0; qi < q; qi++)
    {
        int l, r;
        cin >> l >> r;

        if (l == r)
        {
            cout << -1 << " " << -1 << endl;
            continue;
        }

        if (v[l] != v[r])
        {
            cout << l << " " << r << endl;
            continue;
        }

        int ni = next[l];

        if (ni == -1)
        {
            cout << -1 << " " << -1 << endl;
            continue;
        }

        if (ni > r)
        {
            cout << -1 << " " << -1 << endl;
            continue;
        }

        cout << l << " " << ni << endl;
    }

    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}