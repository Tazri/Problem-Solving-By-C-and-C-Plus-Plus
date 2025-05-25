// TODO
// link : https://codeforces.com/contest/2106/problem/D
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
    int n, m;
    cin >> n >> m;
    vector<int> flowers(n);
    vector<int> prefix(n);
    vector<int> suffix(n);
    vector<int> require(m);

    for (int i = 0; i < n; i++)
        cin >> flowers[i];

    for (int i = 0; i < m; i++)
        cin >> require[i];

    int mi = 0;
    for (int i = 0; i < n; i++)
    {
        if (flowers[i] >= require[mi])
        {
            mi++;
        }

        if (mi >= m)
        {
            cout << 0 << endl;
            return;
        }
    }

    if (mi >= m)
    {
        cout << 0 << endl;
        return;
    }

    prefix[0] = flowers[0] >= require[0] ? 1 : 0;

    for (int i = 1; i < n; i++)
    {
        if (flowers[i] >= require[prefix[i - 1]])
            prefix[i] = prefix[i - 1] + 1;
        else
            prefix[i] = prefix[i - 1];
    }

    suffix[n - 1] = flowers[n - 1] >= require[m - 1] ? m - 2 : m - 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (flowers[i] >= require[suffix[i + 1]])
            suffix[i] = suffix[i + 1] - 1;
        else
            suffix[i] = suffix[i + 1];
    }

    int ans = -1;

    for (int i = 0; i < n; i++)
    {

        if (prefix[i] >= suffix[i])
        {
            if (ans == -1)
                ans = require[prefix[i]];
            else
                ans = min(ans, require[prefix[i]]);
        }
    }

        cout << ans << endl;
}

int main()
{
    optimize();
    // int t;
    // cin >> t;
    // while (t--)
    program();
    return 0;
}