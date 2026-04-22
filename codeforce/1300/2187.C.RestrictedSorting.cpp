// link : https://codeforces.com/problemset/problem/2187/A
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
    vector<int> v(n);
    vector<int> sv(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];
    }

    sort(sv.begin(), sv.end());

    bool sorted = true;
    for (int i = 1; i < n; i++)
        if (v[i - 1] > v[i])
        {
            sorted = false;
            break;
        }

    if (sorted)
    {
        cout << -1 << endl;
        return;
    }

    int ans = -1;
    int mn = sv[0];
    int mx = sv.back();

    for (int i = 0; i < n; i++)
    {
        if (v[i] == sv[i])
            continue;

        int x = max(v[i] - mn, mx - v[i]);

        if (ans == -1)
            ans = x;
        ans = min(ans, x);
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