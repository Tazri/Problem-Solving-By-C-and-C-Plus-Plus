// link : https://codeforces.com/problemset/problem/1792/B
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
    int t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;

    if (t1 == 0)
    {
        if (t4 || t2 || t3)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        return;
    }

    int ans = t1;
    int mod = t1;
    if (t2 && t3)
    {
        int mn = min(t2, t3);
        ans += (mn * 2);
        t2 -= mn;
        t3 -= mn;
    }
    int left = max(t2, t3) + t4;
    int take = min(mod, left);
    ans += take;

    mod -= take;
    left -= take;
    if (left)
        ans += 1;

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