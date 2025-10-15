// link : https://codeforces.com/problemset/problem/1999/C
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

void test()
{
    int n, s, m;
    cin >> n >> s >> m;

    int l, r;
    cin >> l >> r;
    int mx = l;

    for (int i = 1; i < n; i++)
    {
        int tl, tr;
        cin >> tl >> tr;
        int gap = tl - r;
        mx = max(gap, mx);
        r = tr;
        l = tl;
    }
    int gap = m - r;
    mx = max(gap, mx);

    if (mx >= s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        test();
    }
    return 0;
}