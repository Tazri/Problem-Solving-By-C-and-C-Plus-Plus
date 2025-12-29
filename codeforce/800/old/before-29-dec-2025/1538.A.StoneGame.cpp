// link : https://codeforces.com/contest/1538/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;

    cin >> n;

    vector<int> v(n);

    int mx, mn;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
        {
            mx = v[i];
            mn = v[i];
        }
        mx = max(v[i], mx);
        mn = min(mn, v[i]);
    }

    int mi, xi;

    for (int i = 0; i < n; i++)
    {
        if (mn == v[i])
            mi = i;
        if (mx == v[i])
            xi = i;
    }

    int l = min(mi, xi);
    int r = max(mi, xi);

    n--;
    int a1 = n - l + 1;
    int a2 = r + 1;
    int a3 = (l + 1) + (n - r + 1);
    int ans = min(a1, min(a2, a3));

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