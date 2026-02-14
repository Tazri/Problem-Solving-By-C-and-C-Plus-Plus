// linK: https://cses.fi/problemset/task/1640
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

#define endl '\n'

void program()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    map<int, int> mp;

    for (int i = 1; i <= n; i++)
    {
        int need = x - v[i];

        if (mp.count(need))
        {
            cout << mp[need] << " " << i << endl;
            return;
        }
        mp[v[i]] = i;
    }
    cout << "IMPOSSIBLE" << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}