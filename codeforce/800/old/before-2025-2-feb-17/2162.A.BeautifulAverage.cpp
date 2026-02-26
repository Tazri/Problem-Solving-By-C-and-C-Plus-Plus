// link : https://codeforces.com/problemset/problem/2162/A
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
    vector<int> v(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    int ans = 0;

    for (int l = 1; l <= n; l++)
        for (int r = l; r <= n; r++)
        {
            int avg = (v[r] - v[l - 1]) / (r - l + 1);
            ans = max(avg, ans);
        }

    cout << ans << endl;
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