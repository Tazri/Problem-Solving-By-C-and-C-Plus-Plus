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

bool consecutive(vector<int> &v, int n)
{
    vector<bool> st(n + 1, false);

    for (int i = 2; i <= n; i++)
        if (v[i] == v[i - 1])
            continue;
        else
        {
            if (st[v[i]])
            {
                return false;
            }
            st[v[i - 1]] = true;
        }

    return true;
}

void program()
{
    int n;
    cin >> n;
    vector<int> perm(n);
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> perm[i];

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int pi = 0;
    int vi = 0;

    while (pi < n && vi < n)
    {
        if (perm[pi] == v[vi])
        {
            vi++;
            continue;
        }

        while (pi < n && perm[pi] != v[vi])
        {
            pi++;
        }

        if (pi >= n)
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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