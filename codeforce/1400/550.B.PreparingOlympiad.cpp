// link : https://codeforces.com/problemset/problem/550/B
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
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int up = (1 << n) - 1;
    int ans = 0;
    for (int mask = 0; mask <= up; mask++)
    {
        vector<int> taken;
        taken.reserve(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if ((mask >> i) & 1)
            {
                taken.push_back(v[i]);
                sum += v[i];
            }
        }

        if (taken.size() < 2)
            continue;

        int mn = *min_element(taken.begin(), taken.end());
        int mx = *max_element(taken.begin(), taken.end());
        int diff = mx - mn;

        if (l <= sum && sum <= r && diff >= x)
            ans++;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}