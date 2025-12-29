// link : https://codeforces.com/problemset/problem/2121/A
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
    int mn = 0;
    int mx;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (i == 0)
        {
            mn = vi;
            mx = vi;
        }

        mn = min(vi, mn);
        mx = max(vi, mx);
    }

    if (s <= mn)
    {
        cout << mx - s << endl;
        return;
    }

    if (s >= mx)
    {
        cout << s - mn << endl;
        return;
    }

    int left = s - mn;
    int right = mx - s;

    mn = min(left, right);
    mx = max(left, right);
    cout << (mn * 2) + mx << endl;
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