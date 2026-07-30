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
    vector<bool> done(n + 1, false);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> ans(n + 1, 0);
    vector<int> d;

    for (int i = 1; i <= n; i++)
    {
        if (done[i])
            continue;

        for (int j = i; j <= n; j *= 2)
            d.push_back(v[j]);

        sort(d.begin(), d.end());

        for (int j = i, t = 0; j <= n; j *= 2, t++)
            v[j] = d[t];

        done[i] = true;
        d.clear();
    }

    // for (int i = 1; i <= n; i++)
    //     cout << v[i] << " \n"[i == n];

    bool sorted = true;

    for (int i = 2; i <= n; i++)
        if (v[i - 1] > v[i])
            sorted = false;

    if (sorted)
        cout << "YES" << endl;
    else
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