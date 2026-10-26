// link : https://codeforces.com/contest/976/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

struct Seg
{
    int l, r, j;
};

void _DIBBA()
{
    int n;
    cin >> n;

    vector<Seg> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].l >> v[i].r;
        v[i].j = v[i].j = i;
    }
    sort(v.begin(), v.end(), [](Seg a, Seg b)
         {
   if(a.l== b.l)
    return a.r> b.r;
   return a.l < b.l; });

    int j = v[0].j;
    int mxr = v[0].r;
    for (int i = 1; i < n; i++)
    {
        if (mxr >= v[i].r)
        {
            cout << v[i].j + 1 << " " << j + 1 << endl;
            return;
        }
        {
            mxr = v[i].r;
            j = v[i].j;
        }
    }

    cout << -1 << " " << -1 << endl;
}
int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    while (t--)
        _DIBBA();
    0;
}