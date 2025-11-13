// link : https://codeforces.com/problemset/problem/1708/B
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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        if (l % i == 0)
        {
            v[i] = l;
            continue;
        }
        int re = l % i;
        int need = i - re;
        int vi = l + need;
        if (vi > r)
        {
            cout << "NO" << endl;
            return;
        }
        v[i] = vi;
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
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