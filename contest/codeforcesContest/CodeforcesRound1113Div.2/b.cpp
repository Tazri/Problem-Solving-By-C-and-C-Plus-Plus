#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GO_PROGRAM_GO_()         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _ANTI_MARA_PROGRAM(int _CASENO)
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (n < m * 2)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 0; i < m; i++)
    {
        if (b[i] < a[i])
        {
            cout << "NO" << endl;
            return;
        }
    }

    multiset<int> mt;
    for (int i = m; i < n; i++)
        mt.insert(a[i]);

    for (int i = 0; i < m; i++)
    {
        multiset<int>::iterator it = mt.lower_bound(b[i]);

        if (it == mt.end())
        {
            cout << "NO" << endl;
            return;
        }

        mt.erase(it);
    }

    cout << "YES" << endl;
}

int32_t main()
{
    _GO_PROGRAM_GO_();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _ANTI_MARA_PROGRAM(i);
    return 0;
}