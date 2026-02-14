// link : https://codeforces.com/contest/2189/problem/A
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
    int n, h, l;

    cin >> n >> h >> l;

    int mx = max(h, l);
    int mn = min(h, l);
    int up = 0;
    int down = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (mn < vi && vi <= mx)
            up++;
        else if (vi <= mn)
            down++;
    }

    int common = min(up, down);
    int ans = common;
    down -= common;
    ans += (down / 2);

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int n;
    cin >> n;
    while (n--)
        program();
    return 0;
}