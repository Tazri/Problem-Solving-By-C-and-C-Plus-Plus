// link : https://codeforces.com/problemset/problem/1692/E
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
    int n, s;
    cin >> n >> s;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    map<int, int> mp;
    mp[0] = 0;
    int mx = -1;
    for (int r = 1; r <= n; r++)
    {
        int lm1 = v[r] - s;

        if (mp.count(lm1))
        {
            int index = mp[lm1];
            int l = index + 1;
            int len = r - l + 1;
            if (mx == -1)
                mx = len;
            mx = max(mx, len);
        }

        if (mp.count(v[r]))
            continue;

        mp[v[r]] = r;
    }

    if (mx == -1)
    {
        cout << -1 << endl;
        return;
    }

    int ans = n - mx;

    cout << ans << endl;
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